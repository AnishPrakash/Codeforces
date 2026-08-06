#include <stdio.h>
 
int main() {
    int n, opinion;
    if (scanf("%d", &n) != 1) return 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &opinion);
        if (opinion == 1) {
            printf("HARD
");
            return 0;
        }
    }
    
    printf("EASY
");
    return 0;
}