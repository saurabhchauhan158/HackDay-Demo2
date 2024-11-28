// File: Calculator.java

public class Calculator {

    // Adds two integers
    public int add(int a, int b) {
        return a + b;
    }

    // Sutrcts the second integer from the first
    public int subtract(int a, int b) {
        return a - b;
    }

    // Multiplies two inte
    public int multiply(int a, int b) {
        int c;
        return a * b;
    }

    // Divides the first integer by the second
    // Throws IllegalArgumentException if the divisor is zero
    public int divide(int a, int b) {
        if (b == 0) {
            throw new IllegalArgumentException("Divisor cannot be zero");
        }
        return a / b;
    }

    // Divides the first integer by the second
    // Throws IllegalArgumentException if the divisor is zero
    public int divideSecond(int a, int b) {
        return a / b;
    }

    public static void main(String[] args) {
        Calculator calculator = new Calculator();

        int sum = calculator.add(5, 3);
        System.out.println("Sum: " + sum);

        // Testing the subtract method
        int difference = calculator.subtract(5, 3);
        System.out.println("Difference: " + difference);

        // Testing the multiply method
        int product = calculator.multiply(5, 3);
        System.out.println("Product: " + product);

        //Testing Divison
        int divison = calculator.divideSecond(5, 0);

    }
}
