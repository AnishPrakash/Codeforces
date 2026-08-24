#include <stdio.h>
 
int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) == 2) {
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < m; j++) {
                    putchar('#');
                }
            } else if (i % 4 == 1) {
                for (int j = 0; j < m - 1; j++) {
                    putchar('.');
                }
                putchar('#');
            } else {
                putchar('#');
                for (int j = 0; j < m - 1; j++) {
                    putchar('.');
                }
            }
            putchar('
');
        }
    }
    return 0;
}