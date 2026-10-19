#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int m_wins = 0, c_wins = 0;
    
    for (int i = 0; i < n; i++) {
        int m, c;
        scanf("%d %d", &m, &c);
        if (m > c) {
            m_wins++;
        } else if (c > m) {
            c_wins++;
        }
    }
    
    if (m_wins > c_wins) {
        printf("Mishka
");
    } else if (c_wins > m_wins) {
        printf("Chris
");
    } else {
        printf("Friendship is magic!^^
");
    }
    
    return 0;
}