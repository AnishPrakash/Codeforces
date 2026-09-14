#include <stdio.h>
 
int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int ans = (b > a) + (c > a) + (d > a);
        printf("%d
", ans);
    }
    return 0;
}