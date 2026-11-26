import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
 
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
 
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int s1 = Integer.parseInt(st.nextToken());
            int s2 = Integer.parseInt(st.nextToken());
            int s3 = Integer.parseInt(st.nextToken());
            int s4 = Integer.parseInt(st.nextToken());
 
            int win1 = Math.max(s1, s2);
            int lose1 = Math.min(s1, s2);
            int win2 = Math.max(s3, s4);
            int lose2 = Math.min(s3, s4);
 
            if (win1 > lose2 && win2 > lose1) {
                sb.append("YES
");
            } else {
                sb.append("NO
");
            }
        }
        System.out.print(sb);
    }
}