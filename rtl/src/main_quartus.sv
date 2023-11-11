module smolprocee(
	input rawclk,
	input async_rst,
	output [7:0] data_out_A,
	output [7:0] data_out_B
);
	wire arst = ~async_rst;
	wire uclk;
	wire clk_en;
	wire clk = uclk & clk_en;
	wire sync_rst;
	SystemClockDomainManager clk_manager(
		.ref_clk_50(rawclk),
		.user_async_rst(arst),
		.sys_clk(uclk),
		.sys_clk_en(clk_en),
		.sys_sync_rst(sync_rst)
	);
	
	cpu cpu(
		.clk,
		.sync_rst,
		.data_out_A,
		.data_out_B
	);
endmodule