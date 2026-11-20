import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        StringBuilder out = new StringBuilder();
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            String s = br.readLine().trim();
            boolean[] seen = new boolean[26];
            boolean ok = true;
            for (int i = 0; i < n; i++) {
                int idx = s.charAt(i) - 'A';
                if (i > 0 && s.charAt(i) != s.charAt(i - 1) && seen[idx]) {
                    ok = false;
                    break;
                }
                seen[idx] = true;
            }
            out.append(ok ? "YES
" : "NO
");
        }
        System.out.print(out);
    }
}