#include <stdio.h>
 
int main() {
    long long k, n, w;
    scanf("%lld %lld %lld", &k, &n, &w);
    
    long long total_cost = k * (w * (w + 1)) / 2;
    long long borrow = total_cost - n;
    
    if (borrow < 0) {
        borrow = 0;
    }
    
    printf("%lld
", borrow);
    
    return 0;
}