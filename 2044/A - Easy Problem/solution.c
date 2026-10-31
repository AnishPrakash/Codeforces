#include <stdio.h>
 
int main() {
    int t, n;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            scanf("%d", &n);
            printf("%d
", n - 1);
        }
    }
    return 0;
}