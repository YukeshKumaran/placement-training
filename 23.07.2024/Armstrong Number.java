public class ArmstrongInRange {
    public static void main(String[] args) {
        int start = 100;
        int end = 999;
        for (int num = start; num <= end; num++) {
            int sum = 0;
            int temp = num;
            while (temp != 0) {
                int digit = temp % 10;
                sum += digit * digit * digit;
                temp /= 10;
            }
            if (sum == num) {
                System.out.println(num);
            }
        }
    }
}
