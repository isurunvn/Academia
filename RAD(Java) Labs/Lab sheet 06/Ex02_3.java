import java.util.Scanner;

public class Ex02_3 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int[] numbers = new int[10];

        System.out.println("Enter 10 numbers: ");
        for (int i=0; i<numbers.length; i++){
            numbers[i] = scn.nextInt();
        }

        for (int i=0; i<numbers.length; i++){
            for (int j=i-1; j>=0; j--){
                if (numbers[j]>numbers[i]){
                    int temp = numbers[j];
                    numbers[j] = numbers[i];
                    numbers[i] = temp;
                    for (int l=0; l<numbers.length; l++){
                        System.out.print(numbers[l]);
                    }
                    System.out.println(" ");
                }
            }
        }

        System.out.println("Sorted array: ");
        for (int i=0; i<numbers.length; i++){
            System.out.println(numbers[i]);
        }
    }
}
