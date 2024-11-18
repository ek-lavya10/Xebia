#include <stdio.h>

int main() {

int n;

printf("Enter the number of students: ");

scanf("%d", &n);

int marks[n],i;

printf("Enter the marks of each student:\n");

for (i = 0; i < n; i++) { printf("Student %d: ", i + 1); scanf("%d", &marks[1]);

}

printf("\nGrades: \n");


for (i = 0; i < n; i++) { printf("Student %d: ", i + 1);

if (marks[i] >= 75) {

printf("A Grade\n");

} else if (marks[i] >= 60) { printf("B Grade\n");

} else if (marks[i] >= 40) { printf("C Grade\n");

} else { printf("D Grade\n");

}

}

return 0;
}