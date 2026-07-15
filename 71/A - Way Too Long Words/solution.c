#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    char word[105];
    for (int i = 0; i < n; i++) {
        scanf("%s", word);
        int len = strlen(word);
        
        if (len > 10) {
            printf("%c%d%c
", word[0], len - 2, word[len - 1]);
        } else {
            printf("%s
", word);
        }
    }
    
    return 0;
}