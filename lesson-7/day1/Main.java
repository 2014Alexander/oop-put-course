import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        CaloriesCalculator caloriesCalculator = new CaloriesCalculator("c:\\M\\study\\Studia\\Przedmioty\\3 Programowanie obiektowe\\lab\\7\\advent-of-code-for-students-2022-main\\Day01\\Day01.txt");
        try {
            caloriesCalculator.printMaxCalories();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
