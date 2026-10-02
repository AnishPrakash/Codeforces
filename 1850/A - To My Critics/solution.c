#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b >= 10 || b + c >= 10 || a + c >= 10) {
            printf("YES
");
        } else {
            printf("NO
");
        }
    }
    return 0;
}