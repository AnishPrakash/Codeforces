#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        int sorted = 1;
        int prev, curr;
        scanf("%d", &prev);
        for (int i = 1; i < n; i++) {
            scanf("%d", &curr);
            if (curr < prev) {
                sorted = 0;
            }
            prev = curr;
        }
        if (k > 1 || sorted) {
            printf("YES
");
        } else {
            printf("NO
");
        }
    }
    return 0;
}