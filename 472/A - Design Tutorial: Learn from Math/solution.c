#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n % 2 == 0) {
            printf("4 %d
", n - 4);
        } else {
            printf("9 %d
", n - 9);
        }
    }
    return 0;
}