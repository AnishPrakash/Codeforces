#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        
        if (a + (c % 2) > b) {
            printf("First
");
        } else {
            printf("Second
");
        }
    }
    
    return 0;
}