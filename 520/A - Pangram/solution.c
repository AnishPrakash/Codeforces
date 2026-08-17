#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    char s[105];
    if (scanf("%s", s) != 1) return 0;
    
    int seen[26] = {0};
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
        if (c >= 'a' && c <= 'z') {
            if (seen[c - 'a'] == 0) {
                seen[c - 'a'] = 1;
                count++;
            }
        }
    }
    
    if (count == 26) {
        printf("YES
");
    } else {
        printf("NO
");
    }
    
    return 0;
}