#include <stdio.h>

int main() {
    int n, i, x;

   
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];

    for (i = 0; i < n; i++) {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

   
    x = nums[n - 1];


    for (i = n - 1; i > 0; i--) {
        nums[i] = nums[i - 1];
    }

    
    nums[0] = x;

    
    printf("The updated array is: ");
    for (i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
