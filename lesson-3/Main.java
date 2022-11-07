import classes.Author;
import classes.Book;
import classes.Title;

public class Main {
    public static void main(String[] args) {
        Book b1 = new Book(1999, "Funny stories");
        b1.addAuthor("Jon", "Snow");
        b1.addAuthor("Hermiona", "Gringer");
        b1.addGanre("Comedy");
        b1.addGanre("Humor");
        b1.addGanre("Drama");
        System.out.printf(b1.toString());
    }
}
