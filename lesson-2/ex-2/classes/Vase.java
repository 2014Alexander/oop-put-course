package classes;

import java.util.ArrayList;

public class Vase {
    public String name;
    public ArrayList<Flower> flowers;
    public int currentNumberOfFlowers;
    public int flowersLimit;

    public Vase(String name, int numOfFlowers) {
        this.name = name;
        flowers = new <Flower>ArrayList();
        flowersLimit = numOfFlowers;
        currentNumberOfFlowers = 0;
    }

    public void addFlower(Flower f) {
        if (currentNumberOfFlowers < flowersLimit) {
            flowers.add(f);
        }
    }

    public void showFlowers() {
        for (Flower f : flowers) {
            System.out.println(f.name + " " + f.color);
        }
    }
}
