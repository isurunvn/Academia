import java.util.Scanner;

public class stringQ03 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter a string: ");
        String txt = scan.nextLine();

        int length = txt.length();

        int x = check(txt, length);


    }

    public static int check(String txt, int length){
        for (int i=0; i<length; i++){
            char ch = txt.charAt(i);

            for (int j=i+1; j<length; j++){
                char ch2 = txt.charAt(j);
                if (ch == ch2){
                    return 0;
                } else{
                    return 1;
                }
            }
        }
    }

}
