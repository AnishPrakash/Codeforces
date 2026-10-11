#include <stdio.h>
 
int main() {
    int y, w;
    if (scanf("%d %d", &y, &w) == 2) {
        int max = y > w ? y : w;
        int dot = 7 - max;
        const char* res[] = {"", "1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
        printf("%s
", res[dot]);
    }
    return 0;
}