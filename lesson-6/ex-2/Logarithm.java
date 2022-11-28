public class Logarithm implements Number {
    private double base, argument;

    @Override
    public double doubleValue() {
        if (this.base <= 0) {
            throw new IllegalArgumentException("base should be > 0, but base = " + this.base);
        } else if (this.base == 1) {
            throw new IllegalArgumentException("the base should not be equal to 1, but base = " + this.base);
        } else if (this.argument <= 0) {
            throw new IllegalArgumentException("argument should be > 0, but argument = " + this.argument);
        }
        return Math.log(this.argument) / Math.log(this.base);
    }

    public Logarithm(double inputBase, double inputArgument) {
        this.base = inputBase;
        this.argument = inputArgument;
    }
}