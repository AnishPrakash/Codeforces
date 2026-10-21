#include <stdio.h>
#include <string.h>
 
void solve() {
    int n, m;
    scanf("%d %d", &n, &m);
    char x[2005], s[35];
    scanf("%s %s", x, s);
    
    for (int ops = 0; ops <= 5; ops++) {
        if (strstr(x, s) != NULL) {
            printf("%d
", ops);
            return;
        }
        int len = strlen(x);
        memcpy(x + len, x, len);
        x[len * 2] = '\0';
    }
    printf("-1
");
}
 
int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}