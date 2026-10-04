#include <stdio.h>
 
int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            int k;
            scanf("%d", &k);
            int count = 0;
            int current = 1;
            while (1) {
                if (current % 3 != 0 && current % 10 != 3) {
                    count++;
                    if (count == k) {
                        printf("%d
", current);
                        break;
                    }
                }
                current++;
            }
        }
    }
    return 0;
}