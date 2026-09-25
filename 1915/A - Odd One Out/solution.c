#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        printf("%d
", a ^ b ^ c);
    }
    
    return 0;
}