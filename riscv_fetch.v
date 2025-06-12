module riscv_fetch
(
        input wire clk,
        input wire rst,
        
        input wire is_branch,
        input wire is_trap,
        
        input wire [31:0] branch_target,
        input wire [31:0] trap_target,

        output reg [31:0] pc 
);

wire [31:0] pc_plus4 = pc + 4;

always @(posedge clk)
begin
        pc <=   rst ?   0 :
                is_branch ?     branch_target :
                is_trap ?       trap_target :
                pc_plus4;
end

endmodule
