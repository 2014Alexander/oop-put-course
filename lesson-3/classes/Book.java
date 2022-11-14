package classes;

import java.util.ArrayList;

public class Book {
    private int year;
    private ArrayList<Author> authors;
    private ArrayList<Genre> genres;
    private Title title;

    public Book(int year, String title) {
        this.year = year;
        this.title = new Title(title);
        authors = new ArrayList<>();
        genres = new ArrayList<>();
    }

    public void addAuthor(String authorName, String authorSurname) {
        Author a = new Author(authorName, authorSurname);
        authors.add(a);
    }

    public void addGenre(Genre g) {
        genres.add(g);
    }

    public String toString() {
        StringBuilder outString = new StringBuilder("Book: " + title + ", \nYear: " + year + "\n");
        outString.append("Authors:\n");
        for (Author a : authors) {
            outString.append(a).append("\n");
        }
        outString.append("Genres:\n");
        for (Genre g : genres) {
            outString.append(g).append("\n");
        }
        return outString.toString();
    }

}
