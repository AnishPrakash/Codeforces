#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        
        if ((a > b && a < c) || (a < b && a > c)) {
            printf("%d
", a);
        } else if ((b > a && b < c) || (b < a && b > c)) {
            printf("%d
", b);
        } else {
            printf("%d
", c);
        }
    }
    
    return 0;
}