#include <stdio.h>
 
int main() {
    int n, x = 0;
    char s[4];
    
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    while (n--) {
        scanf("%s", s);
        if (s[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    
    printf("%d
", x);
    
    return 0;
}