public class PerfectNumberCheck {
    public static void main(String[] args) {
        int num = 28;
        int sum = 0;
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        System.out.println("Is perfect number: " + (sum == num));
    }
}