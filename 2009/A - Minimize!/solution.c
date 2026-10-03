#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            int a, b;
            scanf("%d %d", &a, &b);
            printf("%d
", b - a);
        }
    }
    return 0;
}