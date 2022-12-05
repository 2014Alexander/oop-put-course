public class Pair {
    private Elf elf1;
    private Elf elf2;

    public Pair(Elf elf1, Elf elf2) {
        this.elf1 = elf1;
        this.elf2 = elf2;
    }

    private boolean checkPair(Elf e1, Elf e2) {
        boolean flag = true;
        for (Integer num : e1.sectorsSet) {
            if (!e2.sectorsSet.contains(num)) {
                flag = false;
                break;
            }
        }
        return flag;
    }

    public boolean checkedError() {
        return checkPair(elf1, elf2) || checkPair(elf2, elf1);
    }

    @Override
    public String toString() {
        return "Pair{" +
                "elf1=" + elf1 +
                ", elf2=" + elf2 +
                '}';
    }
}
