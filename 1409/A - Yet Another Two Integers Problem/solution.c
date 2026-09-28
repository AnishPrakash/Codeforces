#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        int diff = abs(a - b);
        printf("%d
", (diff + 9) / 10);
    }
    
    return 0;
}