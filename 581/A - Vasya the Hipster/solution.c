#include <stdio.h>
 
int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        int diff = (a < b) ? a : b;
        int same = (a > b ? a - b : b - a) / 2;
        printf("%d %d
", diff, same);
    }
    return 0;
}