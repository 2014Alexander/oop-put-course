package classes;

public class Author {
    private String name;
    private String surname;

    public String toString() {
        return String.format(" Name: %s; Surname: %s", name, surname);
    }

    public Author(String name, String surname) {
        this.name = name;
        this.surname = surname;
    }
}
