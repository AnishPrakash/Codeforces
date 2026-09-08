#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int sereja = 0, dima = 0;
    int left = 0, right = n - 1;
    int turn = 0;
    
    while (left <= right) {
        int max_val;
        if (arr[left] > arr[right]) {
            max_val = arr[left];
            left++;
        } else {
            max_val = arr[right];
            right--;
        }
        
        if (turn % 2 == 0) {
            sereja += max_val;
        } else {
            dima += max_val;
        }
        turn++;
    }
    
    printf("%d %d
", sereja, dima);
    return 0;
}