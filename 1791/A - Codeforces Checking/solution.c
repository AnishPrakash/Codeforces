#include <stdio.h>
#include <string.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        char c;
        scanf(" %c", &c);
        if (strchr("codeforces", c)) {
            printf("YES
");
        } else {
            printf("NO
");
        }
    }
    
    return 0;
}