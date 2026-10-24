#include <stdio.h>
 
void solve(void) {
    int n;
    scanf("%d", &n);
 
    int k = n / 2;
    if (k % 2 != 0) {
        printf("NO
");
        return;
    }
 
    printf("YES
");
 
    for (int i = 1; i <= k; ++i) {
        printf("%d ", 2 * i);
    }
 
    for (int i = 1; i < k; ++i) {
        printf("%d ", 2 * i - 1);
    }
 
    printf("%lld
", (long long)(2 * k - 1) + k);
}
 
int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        solve();
    }
    return 0;
}