#include <stdio.h>
 
int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) {
        return 1;
    }
    
    int scores[55];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }
    
    int threshold = scores[k - 1];
    int advancers = 0;
    
    for (int i = 0; i < n; i++) {
        if (scores[i] > 0 && scores[i] >= threshold) {
            advancers++;
        } else {
            break;
        }
    }
    
    printf("%d
", advancers);
    
    return 0;
}