module cpu(
    input clk,
    input sync_rst,
    output [7:0] data_out_A,
    output [7:0] data_out_B
);
    wire read_en_A, read_en_B;
    wire write_en;
    wire [1:0] addr_read_A, addr_read_B, addr_write;
    wire [7:0] regoutA, regoutB;
    wire [7:0] data_in;

    wire [7:0] pc;
    wire mem_read_en;
    wire [7:0] mem_data_out_A, mem_data_out_B;
    wire mem_write;
    wire [7:0] mem_wr_addr;
    wire [7:0] mem_data_addr;

    wire [7:0] branch_wr;
    wire branch_wr_en;

    wire [7:0] fetched_word;

    wire stall_decode;
    wire [1:0] dst;
    wire [7:0] data_A;
    wire [7:0] data_B;
    wire [7:0] decoded_opcode;
    wire [7:0] imm;

    wire [7:0] instr_res;

    memory ram(
        .clk,
        .sync_rst,

        .data(mem_data_addr),
        .write_en(mem_write),
        .addr_read_A(mem_data_addr),
        .addr_write(mem_wr_addr),
        .data_out_A(mem_data_out_A),
        .data_out_B(mem_data_out_B),
        .read_en_A(mem_read_en),
        .pc
    );

    fetch fetch_stage(
        .clk,
        .sync_rst,

        .pc,
        .mem_data_in(mem_data_out_B),
        .word(fetched_word),
        .branch_wr,
        .branch_wr_en
    );

    regfile regfile(
        .clk,
        .sync_rst,

        .read_en_A,
        .read_en_B,
        .write_en,
        .addr_read_A,
        .addr_read_B,
        .addr_write(dst),
        .data_out_A(regoutA),
        .data_out_B(regoutB),
        .data_in(instr_res)
    );

    decode decode_stage(
        .clk,
        .sync_rst,

        .opcode(fetched_word),
        .stall_en(stall_decode),
        .dst,
        .data_A(regoutA),
        .data_B(regoutB),
        .opc_out(decoded_opcode),
        .regfile_read_A(addr_read_A),
        .regfile_read_B(addr_read_B),
        .read_en_A,
        .read_en_B,
        .data_out_A(data_A),
        .data_out_B(data_B),
        .imm
    );
    assign data_out_A = data_A;
    assign data_out_B = data_B;

    execute execute_stage(
        .clk,
        .sync_rst,

        .op_a(regoutA),
        .op_b(regoutB),
        .imm,
        .opcode(decoded_opcode),
        .br_addr(branch_wr),
        .br_en(branch_wr_en),
        .res(instr_res),
        .wr_en(write_en),
        .mem_wr_addr,
        .mem_wr_en(mem_write)
    );
endmodule