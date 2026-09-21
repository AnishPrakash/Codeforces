#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int max_len = 0;
        int cur_len = 0;
        
        for (int i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);
            
            if (a == 0) {
                cur_len++;
                if (cur_len > max_len) {
                    max_len = cur_len;
                }
            } else {
                cur_len = 0;
            }
        }
        
        printf("%d
", max_len);
    }
    
    return 0;
}