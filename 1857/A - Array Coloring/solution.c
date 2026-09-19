#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int n, a;
        int odd_count = 0;
        
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            if (a % 2 != 0) {
                odd_count++;
            }
        }
        
        if (odd_count % 2 == 0) {
            printf("YES
");
        } else {
            printf("NO
");
        }
    }
    
    return 0;
}