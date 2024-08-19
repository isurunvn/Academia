import java.util.Random;
import java.util.Scanner;

public class rollDice {
    public static void main(String[] args) {
    int sum01 = 0;
    int sum02 = 0;
    boolean repeat = true;

    while(sum01 == 100){
        Random rand = new Random();

        int player = 1;
        switch (player){
            case 1:
                System.out.println("Value 01 of Player 01: ");
                int value1 = rand.nextInt(6);
                System.out.println("Value 02 of Player 01 ");
                int value2 = rand.nextInt(6);
                if (value1 == 1 && value2 ==1){
                    sum01 = 0;
                } else if (value1 == value2){
                    sum01 = sum01 + value1 + value2;

                }
        }

    }
}
}
