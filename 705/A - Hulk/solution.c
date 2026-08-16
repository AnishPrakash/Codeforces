#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                printf("I hate");
            } else {
                printf("I love");
            }
            
            if (i == n) {
                printf(" it
");
            } else {
                printf(" that ");
            }
        }
    }
    return 0;
}