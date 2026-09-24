#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int a[105];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        int common;
        if (a[0] == a[1]) {
            common = a[0];
        } else if (a[0] == a[2]) {
            common = a[0];
        } else {
            common = a[1];
        }
        
        for (int i = 0; i < n; i++) {
            if (a[i] != common) {
                printf("%d
", i + 1);
                break;
            }
        }
    }
    
    return 0;
}