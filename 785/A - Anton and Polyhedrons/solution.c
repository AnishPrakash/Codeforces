#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int total = 0;
    char s[20];
    
    while (n--) {
        scanf("%s", s);
        if (s[0] == 'T') total += 4;
        else if (s[0] == 'C') total += 6;
        else if (s[0] == 'O') total += 8;
        else if (s[0] == 'D') total += 12;
        else if (s[0] == 'I') total += 20;
    }
    
    printf("%d
", total);
    return 0;
}