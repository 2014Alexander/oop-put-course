import java.util.Objects;

public final class Word implements CharactersSequence {
    private String content;

    public char lastCharacter() {
        return content.charAt(content.length() - 1);
    }

    public char firstCharacter() {
        return content.charAt(0);
    }

    public Word(String content) {
        this.content = content;
    }

    public String toString() {
        return content;
    }

    @Override
    public boolean equals(Object o) {
        Word w2 = (Word) o;
        return this.content.equals(w2.content);
    }

    @Override
    public int hashCode() {
        return Objects.hash(content);
    }
}
