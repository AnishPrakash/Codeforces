#include <stdio.h>
 
int main() {
    int a[5];
    if (scanf("%d %d %d %d", &a[1], &a[2], &a[3], &a[4]) != 4) {
        return 0;
    }
    
    char s[100005];
    if (scanf("%s", s) != 1) {
        return 0;
    }
    
    long long sum = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        sum += a[s[i] - '0'];
    }
    
    printf("%lld
", sum);
    return 0;
}