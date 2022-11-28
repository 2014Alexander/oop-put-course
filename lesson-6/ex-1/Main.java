public class Main {
    public static void main(String[] args) {
        int a = 2;
        int b = 3;
        NumbersStatistics numbersStatistics = new NumbersStatistics(a, b);
        System.out.println("max(" + a + "," + b + ") = " + numbersStatistics.max());
        System.out.println("min(" + a + "," + b + ") = " + numbersStatistics.min());
        System.out.println("avg(" + a + "," + b + ") = " + numbersStatistics.avg());
    }

}
