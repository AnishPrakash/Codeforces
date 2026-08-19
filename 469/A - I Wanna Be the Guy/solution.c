#include <stdio.h>
 
int main() {
    int n, p, q, level;
    int passed[101] = {0};
    
    if (scanf("%d", &n) != 1) return 0;
    
    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &level);
        passed[level] = 1;
    }
    
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &level);
        passed[level] = 1;
    }
    
    for (int i = 1; i <= n; i++) {
        if (!passed[i]) {
            printf("Oh, my keyboard!
");
            return 0;
        }
    }
    
    printf("I become the guy.
");
    return 0;
}