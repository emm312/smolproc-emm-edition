module decode(
    input clk,
    input sync_rst,

    input [7:0] opcode,
    output stall_en,
    output reg [1:0] dst,
    output reg [7:0] data_out_A,
    output reg [7:0] data_out_B,
    output reg [7:0] opc_out,

    output [1:0] regfile_read_A,
    output [1:0] regfile_read_B,
    output read_en_A,
    output read_en_B,

    input [7:0] data_A,
    input [7:0] data_B
);
    reg has_imm;
    reg [31:0] typ;
    reg prv_imm;
    reg [7:0] inner_opc;

    opcode_rom op_rom(
        .opcode(opcode),
        .instr_t(typ)
    );

    always_comb begin
        has_imm = 0;
        data_out_A = 0;
        data_out_B = 0;
        if (~prv_imm) begin
            dst = opcode[1:0];
            case (typ)
                0: begin // Normal
                    opc_out = { 4'b0, opcode[7:4] };
                    regfile_read_A = opcode[1:0];
                    regfile_read_B = opcode[3:2];
                    has_imm = 0;
                    read_en_A = 1;
                    read_en_B = 1;
                end
                1: begin // Normal Imm
                    opc_out = 0;
                    inner_opc = { 4'b0, opcode[7:4] };
                    regfile_read_A = opcode[1:0];
                    regfile_read_B = opcode[3:2];
                    has_imm = 1;
                    read_en_A = 1;
                    read_en_B = 0;
                end
                2: begin // Ext
                    opc_out = { 2'b0, opcode[7:2] };
                    regfile_read_A = opcode[1:0];
                    has_imm = 0;
                    read_en_B = 1;
                end
                3: begin // ExtImm
                    opc_out = 0;
                    inner_opc = { 2'b0, opcode[7:2] };
                    regfile_read_A = opcode[1:0];
                    read_en_A = 1;
                    has_imm = 1;
                end
            endcase
        end
        if (prv_imm) begin
            data_out_A = data_A;
            data_out_B = opcode;
            read_en_A = 0;
            read_en_B = 0;
            opc_out = inner_opc;
            has_imm = 0;
        end else begin
            data_out_A = data_A;
            data_out_B = data_B;
        end
    end

    always_ff @(posedge clk) begin
        prv_imm <= has_imm;
        if (sync_rst) begin
            prv_imm <= 0;
        end
    end
endmodule
