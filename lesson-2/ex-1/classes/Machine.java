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

    public Machine(String name, int wight) {
        this.name = name;
        this.wight = wight;
    }

    public Machine(String name, int wight, int power) {
        this.name = name;
        this.wight = wight;
        this.power = power;
    }
}
