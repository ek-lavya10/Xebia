#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n]; 

    printf("Enter the marks of each student:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]); 
    }

    
    for (i = 0; i < n; i++) {
        marks[i] += 5;
    }

   
    printf("\nUpdated marks:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
