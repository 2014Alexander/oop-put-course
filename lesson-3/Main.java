import classes.Author;
import classes.Book;
import classes.Ganre;
import classes.Title;

public class Main {
    public static void main(String[] args) {
        Book b1 = new Book(1999, "Funny stories");
        b1.addAuthor("Jon", "Snow");
        b1.addAuthor("Hermiona", "Gringer");
        b1.addGanre(Ganre.Fantasy);
        b1.addGanre(Ganre.Horror);
        b1.addGanre(Ganre.Romance);
        System.out.printf(b1.toString());
    }
}
