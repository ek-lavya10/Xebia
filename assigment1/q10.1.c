#include <stdio.h>

int main() {
    int i, j, space, value, rows = 5;

   
    printf(" row for Pascal's Triangle: \n");

    for (i = 0; i < rows; i++) {
       
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        value = 1;
        for (j = 0; j <= i; j++) {
            printf("%4d", value);
            
            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}