import classes.Dog;

public class Main {
    public static void main(String[] args) {
        Dog aliveDog = new Dog(100);
        System.out.println(aliveDog.healthBalance());
        Dog deadDog = aliveDog.deadAnimal();
        System.out.println(deadDog.healthBalance());
    }
}
