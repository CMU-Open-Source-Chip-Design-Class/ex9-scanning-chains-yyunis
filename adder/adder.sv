`default_nettype none

module adder (
    input logic [3:0] a_in, b_in,
    output logic [4:0] x_out,
    input logic clk
);

    logic [3:0] a_reg, b_reg;

    always_ff @(posedge clk) begin
        a_reg <= a_in;
        b_reg <= b_in;

        x_out <= a_reg + b_reg;
    end

endmodule
