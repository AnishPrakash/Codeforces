#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        char s[6];
        scanf("%s", s);
        int a = 0, b = 0;
        for (int i = 0; i < 5; i++) {
            if (s[i] == 'A') {
                a++;
            } else {
                b++;
            }
        }
        if (a > b) {
            printf("A
");
        } else {
            printf("B
");
        }
    }
    return 0;
}