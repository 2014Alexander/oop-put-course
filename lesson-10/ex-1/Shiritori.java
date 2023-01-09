import java.util.ArrayList;
import java.util.HashSet;
import java.util.Set;

public final class Shiritori implements Game {
    private Set<Word> setOfWords;
    private ArrayList<Word> listOfWords;
    private boolean gameOver;
    private String gameOverReason;
    private Word currentWord;
    private Word previousWord;

    public Shiritori() {
        restart();
    }

    public void restart() {
        setOfWords = new HashSet<>();
        listOfWords = new ArrayList<>();
        gameOver = false;
        gameOverReason = "";
    }

    public void play(String word_str) {
        if (!gameOver) {
            previousWord = currentWord;
            currentWord = new Word(word_str);
            if (!correct()) {
                System.out.println("Game over!");
                System.out.println("Reason: " + gameOverReason + "\n");
            } else {
                listOfWords.add(currentWord);
                setOfWords.add(currentWord);
            }
        }
    }

    public void printWords() {
        System.out.print("[");
        for (Word word : listOfWords) {
            System.out.print("\"" + word.toString() + "\"" + " ");
        }
        System.out.println("]");
    }

    private boolean correct() {
        boolean result = true;
        if (listOfWords.size() != 0) {
            if (setOfWords.contains(currentWord)) {
                result = false;
                gameOver = true;
                gameOverReason = currentWord + " has already been used.";
            } else if (previousWord.lastCharacter() != currentWord.firstCharacter()) {
                result = false;
                gameOver = true;
                gameOverReason = "First character of \"" + currentWord + "\" must match last character of \"" + previousWord + "\".";
            }
        }
        return result;
    }
}
