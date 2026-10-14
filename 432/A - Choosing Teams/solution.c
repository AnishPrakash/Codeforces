#include <stdio.h>
 
int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        int y;
        scanf("%d", &y);
        if (y + k <= 5) {
            count++;
        }
    }
    
    printf("%d
", count / 3);
    return 0;
}