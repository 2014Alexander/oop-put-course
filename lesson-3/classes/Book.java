package classes;

import java.util.ArrayList;

public class Book {
    private int year;
    private ArrayList<Author> authors;
    private ArrayList<Ganre> ganres;
    private Title title;

    public Book(int year, String title) {
        this.year = year;
        this.title = new Title(title);
        authors = new ArrayList<>();
        ganres = new ArrayList<>();
    }

    public void addAuthor(String authorName, String authorSurname) {
        Author a = new Author(authorName, authorSurname);
        authors.add(a);
    }

    public void addGanre(Ganre g) {
        ganres.add(g);
    }

    public String toString() {
        StringBuilder outString = new StringBuilder("Book: " + title + ", \nYear: " + year + "\n");
        outString.append("Authors:\n");
        for (Author a : authors) {
            outString.append(a).append("\n");
        }
        outString.append("Ganres:\n");
        for (Ganre g : ganres) {
            outString.append(g).append("\n");
        }
        return outString.toString();
    }

}
