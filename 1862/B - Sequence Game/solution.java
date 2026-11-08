import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.ArrayList;
import java.util.List;
 
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        if (line == null) return;
        int t = Integer.parseInt(line.trim());
 
        StringBuilder sb = new StringBuilder();
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            int[] b = new int[n];
            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int i = 0; i < n; i++) {
                b[i] = Integer.parseInt(st.nextToken());
            }
 
            List<Integer> a = new ArrayList<>();
            a.add(b[0]);
            for (int i = 1; i < n; i++) {
                if (b[i] < b[i - 1]) {
                    a.add(1);
                }
                a.add(b[i]);
            }
 
            sb.append(a.size()).append("
");
            for (int i = 0; i < a.size(); i++) {
                sb.append(a.get(i)).append(i == a.size() - 1 ? "" : " ");
            }
            sb.append("
");
        }
        System.out.print(sb);
    }
}