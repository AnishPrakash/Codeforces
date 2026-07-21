#include <stdio.h>
#include <ctype.h>
 
int main() {
    char s1[105], s2[105];
    if (scanf("%104s", s1) != 1) return 0;
    if (scanf("%104s", s2) != 1) return 0;
 
    for (int i = 0; s1[i] != '\0'; i++) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);
        
        if (c1 < c2) {
            printf("-1
");
            return 0;
        } else if (c1 > c2) {
            printf("1
");
            return 0;
        }
    }
    
    printf("0
");
    return 0;
}