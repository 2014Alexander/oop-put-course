import classes.Flower;
import classes.Vase;

public class Main {
    public static void main(String[] args) {
        Flower f1 = new Flower("Rose","red", 50);
        Flower f2 = new Flower("Lily","white", 45);
        Flower f3 = new Flower("Tulip","yellow", 40);
        Vase v = new Vase("vase1", 2);
        v.addFlower(f1);
        v.addFlower(f2);
        v.addFlower(f3);
        v.showFlowers();
    }
}
