#include<stdio.h>

int main() {
    int i, n, flag = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("\n");

    // Finding peak elements
    for (i = 0; i < n; i++) {
        if ((i == 0 && num[i] > num[i + 1]) ||              // First element peak check
            (i == n - 1 && num[i] > num[i - 1]) ||          // Last element peak check
            (i > 0 && i < n - 1 && num[i] > num[i - 1] && num[i] > num[i + 1])) { // Middle elements
            printf("The peak element is %d\n", num[i]);
            flag++;
        }
    }

    if (flag == 0) {
        printf("There is no peak element.\n");
    } else {
        printf("There are %d peak elements.\n", flag);
    }

    return 0;
}
