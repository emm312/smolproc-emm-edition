typedef enum { 
    Normal,
    NormalImm,
    ExtOp,
    ExtOpImm
} InstrType;

module opcode_rom(
    input [7:0] opcode,
    output InstrType instr_t
);
    wire [2:0] instr_t_inner;
    always_comb begin
        case (opcode[7:4])
            4'b0000: instr_t = Normal;
            4'b0001: instr_t = Normal;
            4'b0010: instr_t = Normal;
            4'b0011: instr_t = Normal;
            4'b0100: instr_t = Normal;
            4'b0101: instr_t = Normal;
            4'b0110: instr_t = Normal;
            4'b0111: instr_t = Normal;
            4'b1000: instr_t = Normal;
            4'b1001: instr_t = NormalImm;
            4'b1010: instr_t = NormalImm;
            4'b1011: instr_t = NormalImm;
            default: begin
                case (opcode[5:2])
                    4'b0000: instr_t = ExtOp;
                    4'b0001: instr_t = ExtOp;
                    4'b0010: instr_t = ExtOpImm;
                    4'b0011: instr_t = ExtOpImm;
                    4'b0100: instr_t = ExtOp;
                    4'b0101: instr_t = ExtOp;
                    4'b0110: instr_t = ExtOp;
                    4'b0111: instr_t = ExtOpImm;
                    4'b1000: instr_t = ExtOp;
                    4'b1001: instr_t = ExtOp;
                    4'b1010: instr_t = ExtOpImm;
                    4'b1011: instr_t = ExtOpImm;
                    4'b1100: instr_t = ExtOpImm;
                    4'b1101: instr_t = ExtOpImm;
                    4'b1110: instr_t = ExtOpImm;
                    4'b1111: instr_t = ExtOp;
                endcase
            end
        endcase
    end
endmodule