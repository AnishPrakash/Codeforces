#include <stdio.h>
 
int main() {
    int a[4], max = 0, max_idx = 0;
    
    for(int i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
        if(a[i] > max) {
            max = a[i];
            max_idx = i;
        }
    }
    
    for(int i = 0; i < 4; i++) {
        if(i != max_idx) {
            printf("%d ", max - a[i]);
        }
    }
    
    printf("
");
    return 0;
}