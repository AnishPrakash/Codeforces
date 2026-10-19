#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int n;
        char s[15];
        scanf("%d %s", &n, s);
        
        if (n != 5) {
            printf("NO
");
        } else {
            int counts[256] = {0};
            for (int i = 0; i < 5; i++) {
                counts[(unsigned char)s[i]]++;
            }
            
            if (counts['T'] == 1 && counts['i'] == 1 && counts['m'] == 1 && 
                counts['u'] == 1 && counts['r'] == 1) {
                printf("YES
");
            } else {
                printf("NO
");
            }
        }
    }
    
    return 0;
}