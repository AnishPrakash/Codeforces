import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
 
public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer("");
        while (!st.hasMoreTokens()) {
            st = new StringTokenizer(br.readLine());
        }
        int t = Integer.parseInt(st.nextToken());
        StringBuilder sb = new StringBuilder();
        while (t-- > 0) {
            while (!st.hasMoreTokens()) {
                st = new StringTokenizer(br.readLine());
            }
            int n = Integer.parseInt(st.nextToken());
            int[] count = new int[n + 1];
            int ans = -1;
            for (int i = 0; i < n; i++) {
                while (!st.hasMoreTokens()) {
                    st = new StringTokenizer(br.readLine());
                }
                int x = Integer.parseInt(st.nextToken());
                if (++count[x] == 3) {
                    ans = x;
                }
            }
            sb.append(ans).append('
');
        }
        System.out.print(sb);
    }
}