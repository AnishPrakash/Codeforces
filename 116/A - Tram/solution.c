#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    
    int current = 0;
    int max_cap = 0;
    
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        current -= a;
        current += b;
        if (current > max_cap) {
            max_cap = current;
        }
    }
    
    printf("%d
", max_cap);
    
    return 0;
}