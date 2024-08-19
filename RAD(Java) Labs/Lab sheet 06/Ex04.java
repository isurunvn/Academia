import java.util.Scanner;

public class Ex04 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int[] numbers = new int[10];
        int j = 0;

        System.out.println("Enter 10 numbers: ");
        for (int i=0; i<numbers.length; i++){
            numbers[i] = scn.nextInt();
        }

        System.out.println("Enter a value to delete from the array: ");
        int x = scn.nextInt();

        for (int i=0; i<numbers.length; i++){
            System.out.print(numbers[i]);
        }

        while (numbers[j] != x){
            j++;
        }

        for (int i=j; i<numbers.length-j-1; i++){
            numbers[i] = numbers[i+1];
        }

        System.out.println("Array after deleting " + x + ": ");
        for (int i=0; i<numbers.length; i++){
            System.out.println(numbers[i]);
        }
    }
}
