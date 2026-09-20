#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        
        int max_dist = 0;
        int prev = 0;
        
        for (int i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);
            
            if (a - prev > max_dist) {
                max_dist = a - prev;
            }
            prev = a;
        }
        
        if (2 * (x - prev) > max_dist) {
            max_dist = 2 * (x - prev);
        }
        
        printf("%d
", max_dist);
    }
    
    return 0;
}