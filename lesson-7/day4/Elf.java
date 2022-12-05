import java.util.HashSet;
import java.util.Set;

public class Elf {
    private String rawString;
    private int sectorsStart;
    private int sectorsEnd;
    public Set<Integer> sectorsSet;

    public Elf(String rawString) {
        this.rawString = rawString;
        fillStartEnd();
        fillSectors();
    }

    private void fillStartEnd() {
        String[] split = rawString.split("-");
        sectorsStart = Integer.parseInt(split[0]);
        sectorsEnd = Integer.parseInt(split[1]);
    }

    private void fillSectors() {
        sectorsSet = new HashSet<>();
        for (int i = sectorsStart; i <= sectorsEnd; ++i) {
            sectorsSet.add(i);
        }
    }

    @Override
    public String toString() {
        return rawString;
    }
}
