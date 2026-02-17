#include <stdio.h>

int main() {
    int n;

    printf("Enter size of Array: ");
    scanf("%d", &n);

    int arr[n];   // Array diclear kiya hai n size ka

    printf("Enter%d elements:\n", n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array is :-\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  //Array ko print kra diya hai

    }

    return 0;
}
