#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        char s[4];
        scanf("%s", s);
        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c') {
            printf("YES
");
        } else {
            printf("NO
");
        }
    }
    return 0;
}