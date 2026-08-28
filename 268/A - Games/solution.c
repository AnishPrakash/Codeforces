#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int h[35], a[35];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &h[i], &a[i]);
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && h[i] == a[j]) {
                count++;
            }
        }
    }
    
    printf("%d
", count);
    return 0;
}