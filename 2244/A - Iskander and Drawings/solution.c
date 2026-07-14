#include <stdio.h>
#include <stdlib.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t != 0) {
        int n;
        scanf("%d", &n);
        char arr[n + 1]; 
        scanf("%s", arr);
        int c = 0;
        int m = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == '#') {
                c++;
                if (c > m) {
                    m = c; 
                }
            } 
            else if (arr[i] == '*') {
                c = 0; 
            }
        }
        printf("%d
", (m + 1) / 2);
        t--;
    }
    return 0;
}