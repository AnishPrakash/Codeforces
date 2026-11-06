#include <stdio.h>
 
void solve(void) {
    int n;
    if (scanf("%d", &n) != 1) return;
 
    long long sum = 0;
    long long min_val = 1000000000LL;
 
    for (int i = 0; i < n; i++) {
        long long a;
        scanf("%lld", &a);
        sum += a;
        if (a < min_val) {
            min_val = a;
        }
    }
 
    long long result = sum - (long long)n * min_val;
    printf("%lld
", result);
}
 
int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        solve();
    }
    return 0;
}