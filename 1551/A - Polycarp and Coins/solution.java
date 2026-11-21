import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        StringBuilder sb = new StringBuilder();
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            int c1 = n / 3;
            int c2 = n / 3;
            if (n % 3 == 1) {
                c1++;
            } else if (n % 3 == 2) {
                c2++;
            }
            sb.append(c1).append(' ').append(c2).append('
');
        }
        System.out.print(sb);
    }
}