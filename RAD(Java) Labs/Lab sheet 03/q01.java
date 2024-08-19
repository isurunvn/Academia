import java.util.Scanner;

public class q01 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter a sentence: ");
        String sentence = scanner.nextLine();

        int wordCount = countWord(sentence);
        System.out.println("Number of words: "+ wordCount);
    }

    public static int countWord(String sentence){
        if (sentence == null || sentence.isEmpty()){
            return 0;
        }
        String[] words = sentence.split("\\s+");
        return  words.length;
    }
}
