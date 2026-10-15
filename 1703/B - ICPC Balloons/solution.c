#include <stdio.h>
 
int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;
 
    while (t--) {
        int n;
        scanf("%d", &n);
        char s[55];
        scanf("%s", s);
 
        int seen[26] = {0};
        int total = 0;
 
        for (int i = 0; i < n; i++) {
            int idx = s[i] - 'A';
            if (!seen[idx]) {
                total += 2;
                seen[idx] = 1;
            } else {
                total += 1;
            }
        }
 
        printf("%d
", total);
    }
 
    return 0;
}