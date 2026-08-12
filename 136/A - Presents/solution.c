#include <stdio.h>
 
int main() {
    int n, x;
    int p[105];
    
    if (scanf("%d", &n) != 1) return 0;
    
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x);
        p[x] = i;
    }
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", p[i]);
    }
    printf("
");
    
    return 0;
}