#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char s[105];
    if (scanf("%104s", s) != 1) {
        return 0;
    }
 
    int upper = 0, lower = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            upper++;
        } else {
            lower++;
        }
    }
 
    if (upper > lower) {
        for (int i = 0; s[i] != '\0'; i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; s[i] != '\0'; i++) {
            s[i] = tolower(s[i]);
        }
    }
 
    printf("%s
", s);
 
    return 0;
}