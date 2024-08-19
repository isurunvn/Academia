import java.util.Scanner;

public class Ex02 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int[] numbers = new int[10];

        System.out.println("Enter 10 numbers: ");
        for (int i=0; i<numbers.length; i++){
            numbers[i] = scn.nextInt();
        }

        for (int i=0; i<numbers.length; i++){
            int indexOfMin = i;
            for(int j = i+1; j<numbers.length; j++){
                if (numbers[j] < numbers[indexOfMin]) {
                    indexOfMin = j;
                }
            }
            int temp = numbers[indexOfMin];
            numbers[indexOfMin] = numbers[i];
            numbers[i] = temp;
        }

        for (int i=0; i<numbers.length; i++){
            System.out.println("Sorted array: ");
            System.out.println(numbers[i]);
        }
    }

}
