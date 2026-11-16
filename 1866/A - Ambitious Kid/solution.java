import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (sc.hasNextInt()) {
            int n = sc.nextInt();
            int minOps = Integer.MAX_VALUE;
            for (int i = 0; i < n; i++) {
                int val = sc.nextInt();
                minOps = Math.min(minOps, Math.abs(val));
            }
            System.out.println(minOps);
        }
        sc.close();
    }
}