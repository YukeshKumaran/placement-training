public class PalindromeNumber {
    public static void main(String[] args) {
        int num = 121;
        int original = num;
        int reversed = 0;
        while (num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        System.out.println("Is palindrome number: " + (reversed == original));
    }
}
