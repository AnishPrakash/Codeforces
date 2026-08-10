#include <stdio.h>
 
int main() {
    int n, i, prev, curr, groups = 1;
    
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    scanf("%d", &prev);
    
    for (i = 1; i < n; i++) {
        scanf("%d", &curr);
        if (curr != prev) {
            groups++;
        }
        prev = curr;
    }
    
    printf("%d
", groups);
    
    return 0;
}