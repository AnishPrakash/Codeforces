#include <stdio.h>
 
int main(void) {
    char guest[105], host[105], pile[105];
    
    if (scanf("%104s", guest) != 1) return 0;
    if (scanf("%104s", host) != 1) return 0;
    if (scanf("%104s", pile) != 1) return 0;
 
    int counts[26] = {0};
    
    for (int i = 0; guest[i]; i++) {
        counts[guest[i] - 'A']++;
    }
    for (int i = 0; host[i]; i++) {
        counts[host[i] - 'A']++;
    }
    for (int i = 0; pile[i]; i++) {
        counts[pile[i] - 'A']--;
    }
 
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            printf("NO
");
            return 0;
        }
    }
    
    printf("YES
");
    return 0;
}