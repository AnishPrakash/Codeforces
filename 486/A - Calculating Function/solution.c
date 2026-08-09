#include <stdio.h>
 
int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        if (n % 2 == 0) {
            printf("%lld
", n / 2);
        } else {
            printf("%lld
", -(n + 1) / 2);
        }
    }
    return 0;
}