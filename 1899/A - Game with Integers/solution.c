#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int n;
        scanf("%d", &n);
        if (n % 3 != 0) {
            printf("First
");
        } else {
            printf("Second
");
        }
    }
    return 0;
}