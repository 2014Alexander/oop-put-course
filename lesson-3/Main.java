import classes.Book;
import classes.Genre;

public class Main {
    public static void main(String[] args) {
        Book b1 = new Book(1999, "Funny stories");
        b1.addAuthor("Jon", "Snow");
        b1.addAuthor("Hermiona", "Gringer");
        b1.addGenre(Genre.Fantasy);
        b1.addGenre(Genre.Horror);
        b1.addGenre(Genre.Romance);
        System.out.printf(b1.toString());
    }
}
