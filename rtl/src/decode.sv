
module decode(
    input clk,
    input sync_rst,

    input [7:0] opcode,
    output stall_en,
    output reg [1:0] dst,
    output reg [7:0] data_out_A,
    output reg [7:0] data_out_B,
    output reg [7:0] opc_out,
    output reg has_imm,

    output [1:0] regfile_read_A,
    output [1:0] regfile_read_B,
    output reg read_en_A,
    output reg read_en_B,

    input [7:0] data_A,
    input [7:0] data_B
);
    reg [31:0] typ;
    reg prv_imm;

    opcode_rom op_rom(
        .opcode(opcode),
        .instr_t(typ)
    );

    always_comb begin
        has_imm = 0;
        if (~prv_imm) begin
            case (typ)
                0: begin // Normal
                    opc_out = { 4'b0, opcode[3:0] };
                    dst = opcode[5:4];
                    regfile_read_A = opcode[5:4];
                    regfile_read_B = opcode[7:6];
                    has_imm = 0;
                    read_en_A = 1;
                    read_en_B = 1;
                end
                1: begin // Normal Imm
                    opc_out = { 4'b0, opcode[3:0] };
                    dst = opcode[5:4];
                    regfile_read_A = opcode[5:4];
                    regfile_read_B = opcode[7:6];
                    has_imm = 1;
                    read_en_A = 1;
                    read_en_B = 1;
                end
                2: begin // Ext
                    has_imm = 0;
                end
                3: begin // ExtImm
                    has_imm = 1;
                end
            endcase
        end
        if (has_imm) begin
            data_out_A = data_A;
            data_out_B = opcode;
        end else begin
            data_out_A = 0;
            data_out_B = 0;
        end
    end

    always_ff @(posedge clk) begin
        prv_imm <= has_imm;
    end
endmodule