#include <stdio.h>
#include <string.h>
 
void solve() {
    int n;
    scanf("%d", &n);
    char s[2005];
    scanf("%s", s);
    int l = 0, r = n - 1;
    while(l < r && s[l] != s[r]) {
        l++;
        r--;
    }
    printf("%d
", r - l + 1);
}
 
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    return 0;
}