#include <stdio.h>
 
int main() {
    int seen[128] = {0};
    int count = 0;
    int c;
    
    while ((c = getchar()) != '
' && c != EOF) {
        if (c >= 'a' && c <= 'z') {
            if (seen[c] == 0) {
                seen[c] = 1;
                count++;
            }
        }
    }
    
    printf("%d
", count);
    
    return 0;
}