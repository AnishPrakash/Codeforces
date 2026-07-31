#include <stdio.h>
 
int main() {
    char s[25];
    if (scanf("%24s", s) != 1) return 0;
    
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '4' || s[i] == '7') {
            count++;
        }
    }
    
    if (count == 4 || count == 7) {
        printf("YES
");
    } else {
        printf("NO
");
    }
    
    return 0;
}