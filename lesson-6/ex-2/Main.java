public class Main {
    public static void main(String[] args) {
        Logarithm logarithm;
        logarithm = new Logarithm(0, 8);
        try {
            System.out.println(logarithm.doubleValue());
        } catch (IllegalArgumentException e) {
            System.out.println(e);
        }
        logarithm = new Logarithm(1, 8);
        try {
            System.out.println(logarithm.doubleValue());
        } catch (IllegalArgumentException e) {
            System.out.println(e);
        }
        logarithm = new Logarithm(2, -3);
        try {
            System.out.println(logarithm.doubleValue());
        } catch (IllegalArgumentException e) {
            System.out.println(e);
        }
        logarithm = new Logarithm(2, 8);
        try {
            System.out.println(logarithm.doubleValue());
        } catch (IllegalArgumentException e) {
            System.out.println(e);
        }
    }
}
