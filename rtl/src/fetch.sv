module fetch(
    input clk,
    input sync_rst,

    output [7:0] pc,

    input [7:0] mem_data_in,
    output [7:0] word,

    input [7:0] branch_wr,
    input branch_wr_en
);
    reg [7:0] pc_inner;
    always_ff @(posedge clk) begin
        if (sync_rst) begin
            pc_inner <= 8'h00;
        end else begin
            if (branch_wr_en) begin
                pc_inner <= branch_wr;
            end else begin
                pc_inner <= pc + 1;
            end
        end
    end
    assign pc = pc_inner;
    assign word = mem_data_in;
endmodule