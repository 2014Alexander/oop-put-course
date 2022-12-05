import java.io.*;
import java.util.ArrayList;
import java.util.Collections;

public class CaloriesCalculator {
    private String path;
    private ArrayList<Integer> elfsCalories;

    private void read() throws IOException {
        elfsCalories = new ArrayList<>();

        File file = new File(path);
        BufferedReader br = new BufferedReader(new FileReader(file));
        String line;
        for (int i = 0, sum = 0; (line = br.readLine()) != null; ) {
            if (line.equals("")) {
                elfsCalories.add(sum);
                sum = 0;
            } else {
                int c = Integer.parseInt(line);
                sum += c;
            }
        }
    }
    public void printMaxCalories() throws IOException {
        read();
        System.out.println("Maximum = "
                + Collections.max(elfsCalories));
//        for(Integer i:elfsCalories){
//            System.out.println(i);
//        }
    }

    public CaloriesCalculator(String path) {
        this.path = path;
    }
}
