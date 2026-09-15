#include <stdio.h>
 
int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b == c) {
            putchar('+');
        } else {
            putchar('-');
        }
        putchar('
');
    }
    return 0;
}