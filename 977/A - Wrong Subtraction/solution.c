#include <stdio.h>
 
int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    while(n2 != 0) {
        if(n1 % 10 == 0) {
            n1 /= 10;
        } else {
            n1 -= 1;
        }
        n2 -= 1;
    }
    printf("%d
", n1);
    return 0;
}