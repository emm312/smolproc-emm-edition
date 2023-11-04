module main_tb (
    input clk,
    input clk_en,
    input sync_rst
);
    wire rclk = clk & clk_en;
    cpu cpu(
        .clk(rclk),
        .sync_rst(sync_rst)
    );
endmodule
