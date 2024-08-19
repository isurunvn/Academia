import java.util.Scanner;

public class stirngQ02 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter the main string: ");
        String txt1 = scan.nextLine();

        System.out.println("Enter the substring to find: ");
        char txt2 = scan.next().charAt(0);

        System.out.println("Substring" + txt2 + "found at index" + (txt1.indexOf(txt2)));

    }
}
