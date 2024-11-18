#include<stdio.h>

int main() {
    int n, i, j, k[100] = {0}, x;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];

   
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    
    for (i = 0; i < n; i++) {
        x = nums[i];
        for (j = i + 1; j < n; j++) {
            if (nums[j] == x) {
                k[j] = x; 
                break;
            }
        }
    }

    
    printf("Duplicates: ");
    for (j = 0; j < n; j++) {
        if (k[j] != 0) {
            printf("%d ", k[j]);
        }
    }
    printf("\n");

    return 0;
}
