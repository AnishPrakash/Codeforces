import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        if (scanner.hasNextInt()) {
            int t = scanner.nextInt();
            
            while (t-- > 0) {
                int n = scanner.nextInt();
                int count1 = 0;
                int count2 = 0;
                
                for (int i = 0; i < n; i++) {
                    int weight = scanner.nextInt();
                    if (weight == 1) {
                        count1++;
                    } else {
                        count2++;
                    }
                }
                
                int totalWeight = count1 + count2 * 2;
                
                if (totalWeight % 2 != 0) {
                    System.out.println("NO");
                } else {
                    int target = totalWeight / 2;
                    if (target % 2 != 0 && count1 == 0) {
                        System.out.println("NO");
                    } else {
                        System.out.println("YES");
                    }
                }
            }
        }
        
        scanner.close();
    }
}