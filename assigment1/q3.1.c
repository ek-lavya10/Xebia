#include <stdio.h>

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2, result;

    printf("Enter the first integer number: ");
    scanf("%d", &num1);

    printf("Enter the second integer number: ");
    scanf("%d", &num2);

    result = subtract(num1, num2);
    printf("Result is %d\n", result);

    return 0;
}
