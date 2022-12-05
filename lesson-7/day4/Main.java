import java.io.IOException;

public class Main {
    public static void main(String[] args)  {
        Sectors sectors = new Sectors("c:\\M\\study\\Studia\\Przedmioty\\3 Programowanie obiektowe\\lab\\7\\advent-of-code-for-students-2022-main\\Day04\\Day04.txt");
        try {
            sectors.loadPairs();
        } catch (IOException e) {
            e.printStackTrace();
        }
        sectors.showPairsErrors();
    }
}
