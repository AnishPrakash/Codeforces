#include <stdio.h>
#include <string.h>
 
void solve() {
    int n;
    scanf("%d", &n);
    char s[105];
    scanf("%s", s);
 
    int total_empty = 0;
    int has_three_consecutive = 0;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            total_empty++;
            if (i + 2 < n && s[i + 1] == '.' && s[i + 2] == '.') {
                has_three_consecutive = 1;
            }
        }
    }
 
    if (has_three_consecutive) {
        printf("2
");
    } else {
        printf("%d
", total_empty);
    }
}
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        solve();
    }
    return 0;
}