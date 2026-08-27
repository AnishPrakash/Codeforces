#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            long long n;
            scanf("%lld", &n);
            printf("%lld
", (n - 1) / 2);
        }
    }
    return 0;
}