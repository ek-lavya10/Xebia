#include<stdio.h>

int main() {
    int n, i;
    float sum = 0.0, avg;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter the marks of each student:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i]; 
    }

    avg = sum / n; 
    printf("Average of the marks is: %.2f\n", avg);

    return 0;
}
