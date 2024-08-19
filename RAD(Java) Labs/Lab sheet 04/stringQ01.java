import java.util.Scanner;

import static java.lang.Character.toLowerCase;

public class stringQ01 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter a string: ");
        String txt = scan.nextLine();

        String lowerTxt = txt.toLowerCase();

        System.out.println("Converted string to lowercase:" + lowerTxt);

    }
}
