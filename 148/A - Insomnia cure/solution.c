#include <stdio.h>
 
int main() {
    int k, l, m, n, d;
    int count = 0;
    
    if (scanf("%d %d %d %d %d", &k, &l, &m, &n, &d) != 5) {
        return 1;
    }
    
    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            count++;
        }
    }
    
    printf("%d
", count);
    
    return 0;
}