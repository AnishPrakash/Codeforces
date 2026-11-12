import java.util.Scanner;
import java.util.Arrays;
import java.util.ArrayList;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (!sc.hasNextInt()) return;
        int t = sc.nextInt();
        
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            
            Arrays.sort(a);
            
            if (a[0] == a[n - 1]) {
                System.out.println("-1");
            } else {
                ArrayList<Integer> b = new ArrayList<>();
                ArrayList<Integer> c = new ArrayList<>();
                int maxVal = a[n - 1];
                
                for (int i = 0; i < n; i++) {
                    if (a[i] == maxVal) {
                        c.add(a[i]);
                    } else {
                        b.add(a[i]);
                    }
                }
                
                System.out.println(b.size() + " " + c.size());
                for (int x : b) {
                    System.out.print(x + " ");
                }
                System.out.println();
                for (int x : c) {
                    System.out.print(x + " ");
                }
                System.out.println();
            }
        }
        sc.close();
    }
}