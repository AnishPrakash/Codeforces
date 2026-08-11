#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        int p;
        scanf("%d", &p);
        sum += p;
    }
    
    printf("%.12f
", sum / n);
    
    return 0;
}