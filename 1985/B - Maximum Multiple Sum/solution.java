import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) {
            return;
        }
        int t = sc.nextInt();
        StringBuilder sb = new StringBuilder();
        while (t-- > 0) {
            int n = sc.nextInt();
            sb.append(n == 3 ? 3 : 2).append('
');
        }
        System.out.print(sb);
    }
}