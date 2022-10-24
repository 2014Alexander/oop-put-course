package classes;

public class Flower {
    private String name;
    private String color;
    private int length;

    public Flower(String name, String color, int length) {
        this.name = name;
        this.color = color;
        this.length = length;
    }

    public String getName() {
        return name;
    }

    public String getColor() {
        return color;
    }

    public int getLength() {
        return length;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void setLength(int length) {
        this.length = length;
    }
}
