import java.util.Scanner;

public class Calculator {

    public int add(int a, int b) {
        return a + b;
    }

    public double add(double a, double b) {
        return a + b;
    }

    public int subtract(int a, int b) {
        return a - b;
    }

    public double subtract(double a, double b) {
        return a - b;
    }

    public int multiply(int a, int b) {
        return a * b;
    }

    public double multiply(double a, double b) {
        return a * b;
    }

    public int divide(int a, int b) {
        if (b == 0) {
            throw new ArithmeticException("Division by zero is not allowed.");
        }
        return a / b;
    }

    public double divide(double a, double b) {
        if (b == 0.0) {
            throw new ArithmeticException("Division by zero is not allowed.");
        }
        return a / b;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Calculator calculator = new Calculator();

        System.out.println("Do you want to enter integers or floating-point numbers? (Enter 'int' or 'float')");
        String choice = scanner.next();

        if (choice.equalsIgnoreCase("int")) {
            System.out.println("Enter two integers:");
            int int1 = scanner.nextInt();
            int int2 = scanner.nextInt();
            System.out.println("Integer addition: " + calculator.add(int1, int2));
            System.out.println("Integer subtraction: " + calculator.subtract(int1, int2));
            System.out.println("Integer multiplication: " + calculator.multiply(int1, int2));
            System.out.println("Integer division: " + calculator.divide(int1, int2));
        } else if (choice.equalsIgnoreCase("float")) {
            System.out.println("Enter two floating-point numbers:");
            double double1 = scanner.nextDouble();
            double double2 = scanner.nextDouble();
            System.out.println("Floating-point addition: " + calculator.add(double1, double2));
            System.out.println("Floating-point subtraction: " + calculator.subtract(double1, double2));
            System.out.println("Floating-point multiplication: " + calculator.multiply(double1, double2));
            System.out.println("Floating-point division: " + calculator.divide(double1, double2));
        } else {
            System.out.println("Invalid choice. Please restart the program and enter 'int' or 'float'.");
        }

        scanner.close();
    }
}
