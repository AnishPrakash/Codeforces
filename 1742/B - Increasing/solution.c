#include <stdio.h>
#include <stdlib.h>
 
static int cmp(const void *a, const void *b) {
    int arg1 = *(const int *)a;
    int arg2 = *(const int *)b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}
 
int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int n;
        if (scanf("%d", &n) != 1) return 0;
        int *a = (int *)malloc(sizeof(int) * n);
        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(int), cmp);
        int possible = 1;
        for (int i = 1; i < n; ++i) {
            if (a[i] == a[i - 1]) {
                possible = 0;
                break;
            }
        }
        if (possible) {
            printf("YES
");
        } else {
            printf("NO
");
        }
        free(a);
    }
    return 0;
}