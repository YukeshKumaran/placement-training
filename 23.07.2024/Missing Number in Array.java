public class MissingNumber {
    public static void main(String[] args) {
        int[] arr = {1, 2, 4, 5, 6};
        int n = arr.length + 1;
        int sumOfN = n * (n + 1) / 2;
        int sumOfArray = 0;
        for (int num : arr) {
            sumOfArray += num;
        }
        int missingNumber = sumOfN - sumOfArray;
        System.out.println("Missing number: " + missingNumber);
    }
}
