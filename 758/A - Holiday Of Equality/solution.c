#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int a[n];
    int max = -1;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > max) {
            max = a[i];
        }
    }
    
    int total_expense = 0;
    for (int i = 0; i < n; i++) {
        total_expense += (max - a[i]);
    }
    
    printf("%d
", total_expense);
    
    return 0;
}