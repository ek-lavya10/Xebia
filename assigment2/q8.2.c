#include<stdio.h>

int main() {
    int i, n, max = 0, min;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];

    
    for (i = 0; i < n; i++) {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);

        
        if (i == 0) {
            min = marks[i];
        }
    }

    
    for (i = 0; i < n; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
        if (marks[i] < min) {
            min = marks[i];
        }
    }

    
    printf("The maximum marks: %d\n", max);
    printf("The minimum marks: %d\n", min);

    return 0;
}
