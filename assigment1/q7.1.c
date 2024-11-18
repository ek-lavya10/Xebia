#include <stdio.h>
#include <math.h>

void binaryToDecimal() {
    int binary, decimal = 0, base = 1, remainder;
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    printf("Decimal equivalent: %d\n", decimal);
}

void decimalToBinary() {
    int decimal, binary = 0, base = 1, remainder;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * base;
        decimal /= 2;
        base *= 10;
    }

    printf("Binary equivalent: %d\n", binary);
}

int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        binaryToDecimal();
    } else if (choice == 2) {
        decimalToBinary();
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
