package classes;

public class Dog implements Animal {
    private final int health;

    @Override
    public Dog deadAnimal() {
        return new Dog(0);
    }

    @Override
    public String healthBalance() {
        return "Animal health: " + health;
    }

    public Dog() {
        this.health = 100;
    }

    public Dog(int health) {
        this.health = health;
    }
}
