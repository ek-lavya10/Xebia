#include <stdio.h>

int main() {
    int n, i, x, pos;

 
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n + 1]; 

   
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the value to be inserted: ");
    scanf("%d", &x);


    printf("Enter the position to insert the value (1 to %d): ", n + 1);
    scanf("%d", &pos);


    if (pos < 1 || pos > n + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n + 1);
        return 1;
    }

    for (i = n; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = x;

    
    printf("Updated array:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
