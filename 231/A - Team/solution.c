#include <stdio.h>
 
int main() {
    int n, p, v, t, count = 0;
    if (scanf("%d", &n) != 1) return 0;
    while (n--) {
        if (scanf("%d %d %d", &p, &v, &t) == 3) {
            if (p + v + t >= 2) {
                count++;
            }
        }
    }
    printf("%d
", count);
    return 0;
}