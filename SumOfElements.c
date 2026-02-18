#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];   // Declare array

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for(i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Sum of elements = %d", sum);

    return 0;
}
