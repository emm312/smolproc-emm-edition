module fetch(
    input clk,
    input sync_rst,

    output reg [7:0] pc,

    input [7:0] mem_data_in,
    output reg [7:0] word,

    input [7:0] branch_wr,
    input branch_wr_en
);
    always_ff @(posedge clk) begin
        if (sync_rst) begin
            pc <= 8'h00;
        end else begin
            if (branch_wr_en) begin
                pc <= branch_wr;
            end else begin
                pc <= pc + 1;
            end
            word <= mem_data_in;
        end
    end
endmodule