#include <stdio.h>
 
int main() {
    int n;
    char s[55];
    int count = 0;
 
    if (scanf("%d", &n) != 1) return 1;
    if (scanf("%s", s) != 1) return 1;
 
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        }
    }
 
    printf("%d
", count);
    
    return 0;
}