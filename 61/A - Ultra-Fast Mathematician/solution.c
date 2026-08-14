#include <stdio.h>
 
int main() {
    char s1[105], s2[105];
    if (scanf("%104s", s1) == 1 && scanf("%104s", s2) == 1) {
        for (int i = 0; s1[i] != '\0'; i++) {
            if (s1[i] != s2[i]) {
                putchar('1');
            } else {
                putchar('0');
            }
        }
        putchar('
');
    }
    return 0;
}