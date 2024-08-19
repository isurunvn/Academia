import java.util.Scanner;

public class Ex01 {
    public static void main(String[] args) {
        int[] numbers = new int[10];
        Scanner scn = new Scanner(System.in);

        for (int i=0; i<numbers.length; i++){
            System.out.println("Enter an integer: ");
            numbers[i] = scn.nextInt();
        }

        for (int i=0; i<numbers.length; i++){
            System.out.println(numbers[i]);
        }

        int min = numbers[0];
        int max = numbers[0];
        int sum =0;
        double average =0;

        for (int i=1; i<numbers.length; i++){
            if (numbers[i]<min){
                min = numbers[i];
            }
        }
        System.out.println("Minimum value: " + min);

        for (int i=1; i<numbers.length; i++){
            if (numbers[i]>max){
                max = numbers[i];
            }
        }
        System.out.println("Maximum value: "+ max);

        for (int i=0; i<numbers.length; i++){
            sum += numbers[i];
        }
        System.out.println("Sum " + sum);

        average = sum/numbers.length;

        System.out.println("Average: " + average);
    }
}
