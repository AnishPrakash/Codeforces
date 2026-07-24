#include <stdio.h>
#include <ctype.h>
 
int main() {
    char word[1005];
    if (scanf("%1000s", word) == 1) {
        word[0] = toupper(word[0]);
        printf("%s
", word);
    }
    return 0;
}