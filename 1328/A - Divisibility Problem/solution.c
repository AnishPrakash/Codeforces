#include <stdio.h>
 
int main() {
    int t, a, b;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        scanf("%d %d", &a, &b);
        printf("%d
", a % b == 0 ? 0 : b - (a % b));
    }
    
    return 0;
}