module memory(
    input clk,
    input sync_rst,

    input [7:0] addr_read_A,
    input [7:0] addr_write,
    input [7:0] pc,
    input [7:0] data,
    input write_en,
    input read_en_A,

    output reg [7:0] data_out_A, data_out_B
);
    reg [7:0] ram [255:0];
    initial
        $readmemh("ram.mif", ram);
    
    always_ff @(posedge clk) begin
        if (read_en_A) data_out_A <= ram[addr_read_A];
        data_out_B <= ram[pc];
        if (write_en) ram[addr_write] <= data;
        if (sync_rst) begin
            data_out_A <= 0;
            data_out_B <= 0;
        end
    end
endmodule