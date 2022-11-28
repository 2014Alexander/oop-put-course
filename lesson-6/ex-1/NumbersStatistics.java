public class NumbersStatistics {
    private int a;
    private int b;

    public NumbersStatistics(int a, int b) {
        this.a = a;
        this.b = b;
    }

    public int max() {
        return a > b ? a : b;
    }

    public int min() {
        return a < b ? a : b;
    }

    public float avg() {
        return (a + b) / 2.0f;
    }
}
