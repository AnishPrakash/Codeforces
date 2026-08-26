#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            int n;
            scanf("%d", &n);
            int p = 1;
            int ans[10];
            int count = 0;
            
            while (n > 0) {
                int d = n % 10;
                if (d > 0) {
                    ans[count++] = d * p;
                }
                n /= 10;
                p *= 10;
            }
            
            printf("%d
", count);
            for (int i = 0; i < count; i++) {
                printf("%d ", ans[i]);
            }
            printf("
");
        }
    }
    return 0;
}