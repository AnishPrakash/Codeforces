#include <stdio.h>
 
int main() {
    int n, k;
    
    if (scanf("%d %d", &n, &k) != 2) return 0;
    
    int time_left = 240 - k;
    int solved = 0;
    
    for (int i = 1; i <= n; i++) {
        if (time_left >= 5 * i) {
            time_left -= 5 * i;
            solved++;
        } else {
            break;
        }
    }
    
    printf("%d
", solved);
    
    return 0;
}