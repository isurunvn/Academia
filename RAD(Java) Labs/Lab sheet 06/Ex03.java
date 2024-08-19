import java.util.ArrayList;

public class Ex03 {
    public static void main(String[] args) {
        int[] numbers = {4, 2, 7, 4, 8, 9, 2, 6, 8, 5};
        ArrayList<Integer> newarray = new ArrayList<>();

        for (int i = 0; i < numbers.length; i++) {
            int no = numbers[i];
            int count = 0;

            for (int j = 0; j < numbers.length; j++) {
                if (no == numbers[j]) {
                    count++;
                }
            }

            if (count > 1 && !newarray.contains(no)) {
                newarray.add(no);
            }
        }

        System.out.println("New array: " + newarray);
    }
}
