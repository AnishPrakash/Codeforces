#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int t1[5005], t2[5005], t3[5005];
    int c1 = 0, c2 = 0, c3 = 0;
    
    for (int i = 1; i <= n; i++) {
        int t;
        scanf("%d", &t);
        if (t == 1) t1[c1++] = i;
        else if (t == 2) t2[c2++] = i;
        else t3[c3++] = i;
    }
    
    int w = c1 < c2 ? c1 : c2;
    w = w < c3 ? w : c3;
    
    printf("%d
", w);
    for (int i = 0; i < w; i++) {
        printf("%d %d %d
", t1[i], t2[i], t3[i]);
    }
    
    return 0;
}