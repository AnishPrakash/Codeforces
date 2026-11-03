#include <stdio.h>
 
int main(void) {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int x;
        scanf("%d", &x);
        
        int digit = x % 10;
        int len = 0;
        int temp = x;
        while (temp > 0) {
            len++;
            temp /= 10;
        }
        
        int total = (digit - 1) * 10 + (len * (len + 1)) / 2;
        printf("%d
", total);
    }
    
    return 0;
}