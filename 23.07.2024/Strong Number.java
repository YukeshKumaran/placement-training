public class StrongNumberCheck {
    public static void main(String[] args) {
        int num = 145;
        int original = num;
        int sum = 0;
        while (num != 0) {
            int digit = num % 10;
            sum += factorial(digit);
            num /= 10;
        }
        System.out.println("Is strong number: " + (sum == original));
    }

    public static int factorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
}
