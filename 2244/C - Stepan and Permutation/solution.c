#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        int d = gcd(x, y);
        int flag = 1;
        for (int i = 0; i < n; i++) {
            int p;
            scanf("%d", &p);
            if (abs(p - 1 - i) % d != 0) {
                flag = 0;
            }
        }
        if (flag) {
            printf("YES
");
        } else {
            printf("NO
");
        }
    }
    return 0;
}