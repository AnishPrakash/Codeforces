#include <stdio.h>
 
int main() {
    int n, k, l, c, d, p, nl, np;
    
    if (scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np) == 8) {
        int toasts_drink = (k * l) / nl;
        int toasts_limes = c * d;
        int toasts_salt = p / np;
        
        int min_toasts = toasts_drink;
        if (toasts_limes < min_toasts) {
            min_toasts = toasts_limes;
        }
        if (toasts_salt < min_toasts) {
            min_toasts = toasts_salt;
        }
        
        printf("%d
", min_toasts / n);
    }
    
    return 0;
}