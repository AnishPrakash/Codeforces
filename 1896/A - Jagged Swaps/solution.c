#include <stdio.h>
 
int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int n;
        scanf("%d", &n);
        int first_val;
        scanf("%d", &first_val);
        for (int i = 1; i < n; i++) {
            int dummy;
            scanf("%d", &dummy);
        }
        if (first_val == 1) {
            printf("YES
");
        } else {
            printf("NO
");
        }
    }
    return 0;
}