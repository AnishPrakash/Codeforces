#include <stdio.h>
 
void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;
    
    long long a[10];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    
    long long max_prod = -1;
    for (int i = 0; i < n; i++) {
        long long current_prod = 1;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                current_prod *= (a[j] + 1);
            } else {
                current_prod *= a[j];
            }
        }
        if (current_prod > max_prod) {
            max_prod = current_prod;
        }
    }
    printf("%lld
", max_prod);
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