#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int n;
        scanf("%d", &n);
        int odd_in_even = 0;
        int even_in_odd = 0;
        
        for (int i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);
            if (i % 2 != a % 2) {
                if (i % 2 == 0) {
                    odd_in_even++;
                } else {
                    even_in_odd++;
                }
            }
        }
        
        if (odd_in_even == even_in_odd) {
            printf("%d
", odd_in_even);
        } else {
            printf("-1
");
        }
    }
    return 0;
}