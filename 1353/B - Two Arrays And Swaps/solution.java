import java.util.Arrays;
import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) {
            return;
        }
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            for (int i = 0; i < n; i++) {
                b[i] = sc.nextInt();
            }
            Arrays.sort(a);
            Arrays.sort(b);
            for (int i = 0; i < k; i++) {
                if (b[n - 1 - i] > a[i]) {
                    a[i] = b[n - 1 - i];
                } else {
                    break;
                }
            }
            int sum = 0;
            for (int x : a) {
                sum += x;
            }
            System.out.println(sum);
        }
        sc.close();
    }
}