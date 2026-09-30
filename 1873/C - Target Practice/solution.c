#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        char grid[10][11];
        int score = 0;
        
        for (int i = 0; i < 10; i++) {
            scanf("%s", grid[i]);
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    int min_i = i < 9 - i ? i : 9 - i;
                    int min_j = j < 9 - j ? j : 9 - j;
                    score += (min_i < min_j ? min_i : min_j) + 1;
                }
            }
        }
        
        printf("%d
", score);
    }
    
    return 0;
}