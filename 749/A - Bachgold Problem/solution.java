import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        if (line == null) {
            return;
        }
        int n = Integer.parseInt(line.trim());
        int k = n / 2;
        StringBuilder sb = new StringBuilder();
        sb.append(k).append('
');
        for (int i = 0; i < k - 1; i++) {
            sb.append("2 ");
        }
        if (n % 2 == 0) {
            sb.append('2');
        } else {
            sb.append('3');
        }
        System.out.println(sb.toString());
    }
}