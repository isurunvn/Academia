import java.util.Scanner;

public class Ex02_2 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int[] numbers = new int[10];

        System.out.println("Enter 10 numbers: ");
        for (int i=0; i<numbers.length; i++){
            numbers[i] = scn.nextInt();
        }

        for (int i=0; i<numbers.length-1; i++){
            int j=i+1;
            if (numbers[j]>numbers[i]){
                int temp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temp;
            }
        }

        System.out.println("Sorted array: ");
        for (int i=0; i<numbers.length; i++){
            System.out.println(numbers[i]);
        }
    }
}
