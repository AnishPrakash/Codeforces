#include <stdio.h>
#include <string.h>
 
int main() {
    char s[105];
    if (scanf("%s", s) == 1) {
        int c[4] = {0};
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= '1' && s[i] <= '3') {
                c[s[i] - '0']++;
            }
        }
        int first = 1;
        for (int i = 1; i <= 3; i++) {
            while (c[i] > 0) {
                if (!first) {
                    printf("+");
                }
                printf("%d", i);
                first = 0;
                c[i]--;
            }
        }
        printf("
");
    }
    return 0;
}