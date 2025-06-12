module fpadd_unsigned
(
        input wire clk,
        input wire rst,

        input wire [30:0] in1,
        input wire [30:0] in2,

        output reg [30:0] result
);

/*verilator lint_off UNUSEDSIGNAL */

// Parameterize inputs
wire [7:0] in1_exponent = in1[30:23];
wire [23:0] in1_mantissa = {1'b1, in1[22:0]};

wire [7:0] in2_exponent = in2[30:23];
wire [23:0] in2_mantissa = {1'b1, in2[22:0]};

// Normalize inputs
wire in1_ge =  (in1_exponent > in2_exponent) | ((in1_exponent == in1_exponent) & in1_mantissa >= in2_mantissa);

wire [7:0] exponent_diff = in1_ge ?     in1_exponent - in2_exponent :
                                        in2_exponent - in1_exponent;

wire [23:0] in1_mantissa_shifted = in1_ge ?     in1_mantissa :
                                                in1_mantissa >> exponent_diff;
wire [23:0] in2_mantissa_shifted = in1_ge ?     in2_mantissa >> exponent_diff :
                                                in2_mantissa;

wire [7:0] greater_exponent = in1_ge ?  in1_exponent :
                                        in2_exponent;

// Adder
wire [24:0] unsigned_adder = in1_mantissa_shifted + in2_mantissa_shifted;
wire [22:0] unsigned_adder_normalized = unsigned_adder[24] ?    unsigned_adder[23:1] :
                                                                unsigned_adder[22:0];

wire [7:0] result_exponent = unsigned_adder[24] ?       greater_exponent + 1 :
                                                        greater_exponent;

always @(posedge clk)
begin
        if (rst)
        begin
                result <= 0;
        end else
        begin
                result <= {result_exponent, unsigned_adder_normalized};
        end
end

endmodule

