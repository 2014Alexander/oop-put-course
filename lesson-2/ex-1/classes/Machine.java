package classes;

public class Machine {
    public String name;
    public int wight;
    public int power;

    public Machine() {
    }

    public Machine(String name) {
        this.name = name;
    }

    public Machine(String name, int weight) {
        this(name);
        this.wight = weight;
    }

    public Machine(String name, String weight) {
        this(name, Integer.parseInt(weight));
    }

    public Machine(String name, int weight, int power) {
        this(name, weight);
        this.power = power;
    }

    public Machine(String name, String weight, String power) {
        this(name, Integer.parseInt(weight), Integer.parseInt(power));
    }

    public Machine(String name, int weight, String power) {
        this(name, weight, Integer.parseInt(power));
    }

    public Machine(String name, String weight, int power) {
        this(name, Integer.parseInt(weight), power);
    }
}
