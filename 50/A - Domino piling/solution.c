#include <stdio.h>
 
int main() {
    int j, n;
    if (scanf("%d %d", &j, &n) == 2) {
        printf("%d
", (j * n) / 2);
    }
    return 0;
}