#include <stdio.h>

int main() 
{

int n, found = 0;

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

printf("The first 99 is scored by the student %d.\n", i + 1);

found = 1;

break;

}

if (!found) {

printf("No one scored 99.\n");

}

return 0;

}
}