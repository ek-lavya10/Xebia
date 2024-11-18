#include<stdio.h>

int main() {
    int n, count = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n], i;

    printf("Enter the marks of each student:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    
    for (i = 0; i < n; i++) {
        if (marks[i] == 99) { 
            printf("Student %d scored 99.\n", i + 1);
            count++;
        }
    }


    if (count == 0) { 
        printf("None scored 99.\n");
    } else {
        printf("Total number of students who scored 99: %d\n", count);
    }

    return 0;
}
