#include <stdio.h>
#include <stdlib.h>
 
void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;
    
    int v1 = 0, c1 = 0;
    int v2 = 0, c2 = 0;
    int v3 = 0, c3 = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (c1 == 0 || v1 == x) {
            v1 = x;
            c1++;
        } else if (c2 == 0 || v2 == x) {
            v2 = x;
            c2++;
        } else {
            v3 = x;
            c3++;
        }
    }
    
    if (c3 > 0) {
        printf("No
");
    } else if (c2 == 0) {
        printf("Yes
");
    } else {
        if (abs(c1 - c2) <= 1) {
            printf("Yes
");
        } else {
            printf("No
");
        }
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