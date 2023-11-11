module decode(
    input clk,
    input sync_rst,

    input [7:0] opcode,
    output stall_en,
    output reg [1:0] dst,
    output reg [7:0] data_out_A,
    output reg [7:0] data_out_B,
    output reg [7:0] opc_out,
    output reg [7:0] imm,

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
    
	assign regfile_read_A = opcode[1:0];
	assign regfile_read_B = opcode[3:2];
    always_latch begin
        if (~prv_imm) begin
            case (typ)
                0: begin // Normal
                    inner_opc = { 4'b0, opcode[7:4] };
                    has_imm = 0;
                    read_en_A = 1;
                    read_en_B = 1;
                end
                1: begin // Normal Imm
                    inner_opc = { 4'b0, opcode[7:4] };
                    has_imm = 1;
                    read_en_A = 1;
                    read_en_B = 1;
                end
                2: begin // Ext
                    inner_opc = { 2'b0, opcode[7:2] };
                    has_imm = 0;
                    read_en_A = 1;
                    read_en_B = 0;
                end
                3: begin // ExtImm
                    inner_opc = { 2'b0, opcode[7:2] };
                    read_en_A = 1;
                    read_en_B = 0;
                    has_imm = 1;
                end
            endcase
        end else begin
			read_en_A = 0;
			read_en_B = 0;
			has_imm = 0;
		end
    end
	 
	 always_latch begin
        if (prv_imm) begin
			dst = dst;
            data_out_A = data_A;
            data_out_B = data_B;
            imm = opcode;
            opc_out = inner_opc;
        end else begin
			dst = opcode[1:0];
            data_out_A = data_A;
            data_out_B = data_B;
            imm = 0;
            opc_out = inner_opc;
        end
	 end

    always_ff @(posedge clk) begin
        prv_imm <= has_imm;
        if (sync_rst) begin
            prv_imm <= 0;
        end
    end
endmodule
