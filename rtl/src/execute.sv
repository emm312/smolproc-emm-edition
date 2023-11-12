module execute(
    input clk,
    input sync_rst,

    input [7:0] op_a,
    input [7:0] op_b,
    input [7:0] imm,
    input [7:0] opcode,

    output [7:0] res,
    output wr_en,

    output [7:0] mem_wr_addr,
    output mem_wr_en,

    output br_en,
    output [7:0] br_addr
);
    reg flag;
    reg sp;

endmodule
