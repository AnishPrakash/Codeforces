#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    int h = 0;
    int sum = 0;
    int cur = 0;
    
    while (1) {
        h++;
        cur += h;
        if (sum + cur <= n) {
            sum += cur;
        } else {
            h--;
            break;
        }
    }
    
    printf("%d
", h);
    return 0;
}