#include <stdio.h>
 
int main() {
    char s[205];
    
    if (scanf("%204s", s) == 1) {
        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] == '.') {
                printf("0");
            } else if (s[i] == '-') {
                if (s[i+1] == '.') {
                    printf("1");
                } else if (s[i+1] == '-') {
                    printf("2");
                }
                i++;
            }
        }
        printf("
");
    }
    
    return 0;
}