#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    int available = 0;
    int untreated = 0;
    
    for (int i = 0; i < n; i++) {
        int event;
        scanf("%d", &event);
        
        if (event == -1) {
            if (available > 0) {
                available--;
            } else {
                untreated++;
            }
        } else {
            available += event;
        }
    }
    
    printf("%d
", untreated);
    
    return 0;
}