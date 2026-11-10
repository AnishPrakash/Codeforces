import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        if (!scanner.hasNextInt()) return;
        int t = scanner.nextInt();
        
        StringBuilder sb = new StringBuilder();
        while (t-- > 0) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            int min = Math.min(x, y);
            int max = Math.max(x, y);
            sb.append(min).append(" ").append(max).append("
");
        }
        System.out.print(sb);
    }
}