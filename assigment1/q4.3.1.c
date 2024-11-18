#include<stdio.h>

void swap_temp(int *a, int *b)
{
    int temp;
temp=*a;
*a=*b;
*b=temp;

}

int main()
{
int num1;int num2;
printf(" give 1st number for swap \n");
scanf("%d", &num1);

printf(" give 2nd number for swap \n");
scanf("%d", &num2);

printf("  before swap 1st number is %d,2nd number is %d \n" , num1, num2 );
    

  swap_temp(&num1, &num2);
    printf(" after swap 1st number %d, 2nd number is %d \n", num1,num2);
    return 0;

}


