#include <stdio.h>
#include <string.h>
 
int main() {
    char s[105];
    char t[105];
    
    if (scanf("%104s", s) != 1) return 0;
    if (scanf("%104s", t) != 1) return 0;
    
    int len_s = strlen(s);
    int len_t = strlen(t);
    
    if (len_s != len_t) {
        printf("NO
");
        return 0;
    }
    
    for (int i = 0; i < len_s; i++) {
        if (s[i] != t[len_s - 1 - i]) {
            printf("NO
");
            return 0;
        }
    }
    
    printf("YES
");
    
    return 0;
}