import classes.Machine;

public class Main {
    public static void main(String[] args) {
        Machine m1 = new Machine();
        Machine m2 = new Machine("Bosh");
        Machine m3 = new Machine("Bosh2", 3);
        Machine m4 = new Machine("Bosh3", 4, 2);
        Machine m5 = new Machine("Samsung 4.5", "5", 5);
        Machine m6 = new Machine("Samsung 5", "5", "5");
    }
}
