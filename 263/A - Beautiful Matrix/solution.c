#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int val, r = 0, c = 0;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &val);
            if (val == 1) {
                r = i;
                c = j;
            }
        }
    }
    
    int moves = abs(r - 2) + abs(c - 2);
    printf("%d
", moves);
    
    return 0;
}