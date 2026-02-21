#include <stdio.h>

int main() {
    int n, i;
    
    //Array ka size input lene ke liye
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    //Elements input karne ke liye
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Reverse krne ke liye
    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}