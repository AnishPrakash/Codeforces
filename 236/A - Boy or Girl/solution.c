#include <stdio.h>
#include <string.h>
 
int main() {
    char s[105];
    if (scanf("%s", s) == 1) {
        int count[26] = {0};
        int len = strlen(s);
        int distinct = 0;
        
        for (int i = 0; i < len; i++) {
            if (count[s[i] - 'a'] == 0) {
                count[s[i] - 'a'] = 1;
                distinct++;
            }
        }
        
        if (distinct % 2 == 0) {
            printf("CHAT WITH HER!
");
        } else {
            printf("IGNORE HIM!
");
        }
    }
    return 0;
}