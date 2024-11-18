#include <stdio.h>

int main() {
    int a, sum = 0;

  
    printf("Enter an integer: ");
    scanf("%d", &a);

  
    for (int i = 1; i <= a / 2; i++) {
        if (a % i == 0) {
            sum += i;
        }
    }

    if (sum == a && a != 0) {
        printf("%d is a Perfect Number.\n", a);
    } else {
        printf("%d is not a Perfect Number.\n", a);
    }

    return 0;
}
