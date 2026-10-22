#include <stdio.h>
 
int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d
", n / 2);
    }
    return 0;
}