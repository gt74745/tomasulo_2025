module core
(
        input wire clk,
        input wire rst
);

initial begin
        $dumpfile("wave.vcd");
        $dumpvars();
end

/*verilator lint_off UNUSEDSIGNAL */

wire [31:0] pc_p0;

riscv_fetch fetch (
        .clk(clk),
        .rst(rst),

        .is_branch(0),
        .is_trap(0),

        .branch_target(0),
        .trap_target(0),

        .pc(pc_p0)
);

wire [31:0] imem_data;
wire imem_enable = 1;
wire [7:0] imem_addr = pc_p0[7:0];

imem imem (
        .addr(imem_addr),
        .enable(imem_enable),

        .data(imem_data)
);

reg [31:0] fpadd_in1;
reg [31:0] fpadd_in2;
wire [31:0] fpadd_result;

fpadd fpadd0 (
        .clk(clk),
        .rst(rst),

        .in1(fpadd_in1),
        .in2(fpadd_in2),

        .result(fpadd_result)
);

/*verilator lint_on UNUSEDSIGNAL */

initial
begin
        fpadd_in1 = 32'h00c90fd0;
        fpadd_in2 = 32'h3504f3;
end

always @(posedge clk)
begin
        if (rst)
        begin

        end else
        begin

        end
end

endmodule
