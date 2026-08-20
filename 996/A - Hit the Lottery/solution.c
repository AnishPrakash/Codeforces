#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int count = 0;
    
    count += n / 100;
    n %= 100;
    
    count += n / 20;
    n %= 20;
    
    count += n / 10;
    n %= 10;
    
    count += n / 5;
    n %= 5;
    
    count += n;
    
    printf("%d
", count);
    
    return 0;
}