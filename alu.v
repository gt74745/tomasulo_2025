module alu
(
        input wire clk,
        input wire rst,

        input wire [31:0] in1,
        input wire [31:0] in2,
        input wire [7:0] op,
        input wire funct7_flag,

        output reg [31:0] result
);

always @(posedge clk)
begin
        if (rst)
        begin
                result <= 32'b0;
        end else
        begin
                result <=       op[0] ? (funct7_flag ?  in1 - in2 :
                                                        in1 + in2 ) :
                                op[1] ? in1 << in2 :
                                op[2] ? $signed(in1) < $signed(in2) :
                                op[3] ? in1 < in2 :
                                op[4] ? in1 ^ in2 :
                                op[5] ? (funct7_flag ?  in1 >>> in2 :
                                                        in1 >> in2 ):
                                op[6] ? in1 | in2 :
                                op[7] ? in1 & in2 :
                                32'b0
        end
end

endmodule
