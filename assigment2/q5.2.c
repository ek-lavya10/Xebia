#include<stdio.h>

int main()
{



int n, sum = 0;

printf("enter the number of student : ");

scanf("%d",&n);

int marks[n],i;

printf("enter the marks of each student : \n ");

for (i=0;i<n;i++){

printf("student %d ", i + 1);

scanf("%d", &marks[i]);

sum += marks[i];

printf("sum of all numbers is: %d \n",sum);

return 0;

}
}
