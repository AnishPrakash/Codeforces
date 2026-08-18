#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int max_val = 0, min_val = 101;
    int max_idx = 0, min_idx = 0;
    
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        if (a > max_val) {
            max_val = a;
            max_idx = i;
        }
        if (a <= min_val) {
            min_val = a;
            min_idx = i;
        }
    }
    
    int ans = max_idx + (n - 1 - min_idx);
    if (max_idx > min_idx) {
        ans--;
    }
    
    printf("%d
", ans);
    return 0;
}