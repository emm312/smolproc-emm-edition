module regfile(
    input clk,
    input sync_rst,

    input read_en_A, read_en_B,
    input write_en,
    input [1:0] addr_read_A, addr_read_B, addr_write,
    input [7:0] data_in,
    output reg [7:0] data_out_A, data_out_B
);
    reg [7:0] regs [3:0];

    always_ff @(posedge clk) begin
        if (read_en_A) data_out_A <= regs[addr_read_A];
        if (read_en_B) data_out_B <= regs[addr_read_B];
        if (write_en) regs[addr_write] <= data_in;

        if (sync_rst) begin
            data_out_A <= 0;
            data_out_B <= 0;
            regs[0] <= 0;
            regs[1] <= 0;
            regs[2] <= 0;
            regs[3] <= 0;
        end
    end
endmodule
