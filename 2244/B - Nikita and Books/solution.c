#include <stdio.h>
 
void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;
    long long sum = 0;
    int possible = 1;
    for (int i = 1; i <= n; i++) {
        long long a;
        scanf("%lld", &a);
        sum += a;
        long long required = (long long)i * (i + 1) / 2;
        if (sum < required) {
            possible = 0;
        }
    }
    if (possible) {
        printf("YES
");
    } else {
        printf("NO
");
    }
}
 
int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}