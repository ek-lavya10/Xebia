#include <stdio.h>

int main() {
    int i, n, pos;


    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];

  
    for (i = 0; i < n; i++) {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &nums[i]);
    }


    printf("Array: [");
    for (i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

   
    printf("Enter the position to be deleted (1 to %d): ", n);
    scanf("%d", &pos);

    
    if (pos < 1 || pos > n) {
        printf("Deletion in the array isn't possible\n");
    } else {
       
        for (i = pos - 1; i < n - 1; i++) {
            nums[i] = nums[i + 1];
        }
        n--; 

        printf("The updated array is: [");
        for (i = 0; i < n; i++) {
            printf("%d", nums[i]);
            if (i < n - 1) {
                printf(", ");
            }
        }
        printf("]\n");
    }

    return 0;
}
