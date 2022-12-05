import java.io.*;
import java.util.ArrayList;

public class Sectors {
    private String path;
    private ArrayList<String> rawData;
    private ArrayList<Pair> pairs;

    public Sectors(String path) {
        this.path = path;
    }

    private void readRawData() throws IOException {
        rawData = new ArrayList<>();
        File file = new File(path);
        BufferedReader br = new BufferedReader(new FileReader(file));
        String line;
        while ((line = br.readLine()) != null) {
            rawData.add(line);
        }

    }

    public void showPairsErrors() {
        int errorsNum = 0;
        for (Pair pair : pairs) {
            if (pair.checkedError()) {
                System.out.println(pair);
                ++errorsNum;
            }
        }
        System.out.println("Errors num = " + errorsNum);
    }

    public void loadPairs() throws IOException {
        readRawData();
        pairs = new ArrayList<>();
        for (String line : rawData) {
            String[] pairStrings = line.split(",");
            Elf elf1 = new Elf(pairStrings[0]);
            Elf elf2 = new Elf(pairStrings[1]);
            Pair pair = new Pair(elf1, elf2);
            pairs.add(pair);
        }
    }
}
