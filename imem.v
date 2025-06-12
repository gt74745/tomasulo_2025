module imem (
        input wire [7:0] addr,
        input wire enable,

        output wire [31:0] data
);

initial begin
        $readmemh("instruction_memory.hex", x);
end

reg [31:0] x [0:255];

assign data = enable ? x[addr] : 32'b0;

endmodule
