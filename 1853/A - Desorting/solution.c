#include <stdio.h>
 
void solve() {
    int n;
    scanf("%d", &n);
    int a[505];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int min_ops = 2e9;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i+1]) {
            min_ops = 0;
            break;
        }
        int diff = a[i+1] - a[i];
        int ops = diff / 2 + 1;
        if (ops < min_ops) {
            min_ops = ops;
        }
    }
    printf("%d
", min_ops);
}
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}