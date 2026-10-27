#include <stdio.h>
 
int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        long long x, y, n;
        scanf("%lld %lld %lld", &x, &y, &n);
        
        long long rem = n % x;
        long long ans;
        
        if (rem >= y) {
            ans = n - (rem - y);
        } else {
            ans = n - rem - (x - y);
        }
        
        printf("%lld
", ans);
    }
    
    return 0;
}