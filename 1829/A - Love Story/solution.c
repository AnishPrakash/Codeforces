#include <stdio.h>
 
int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;
 
    const char target[] = "codeforces";
 
    while (t--) {
        char s[11];
        scanf("%10s", s);
 
        int diff = 0;
        for (int i = 0; i < 10; i++) {
            if (s[i] != target[i]) {
                diff++;
            }
        }
        printf("%d
", diff);
    }
 
    return 0;
}