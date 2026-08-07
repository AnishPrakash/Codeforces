#include <stdio.h>
#include <string.h>
 
int main() {
    int n, t;
    if (scanf("%d %d", &n, &t) != 2) return 0;
    
    char s[55];
    if (scanf("%s", s) != 1) return 0;
    
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (s[j] == 'B' && s[j + 1] == 'G') {
                s[j] = 'G';
                s[j + 1] = 'B';
                j++;
            }
        }
    }
    
    printf("%s
", s);
    
    return 0;
}