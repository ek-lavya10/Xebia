#include<stdio.h>
int main()
{
    int num1, num2, temp;
     printf(" give 1st number for swap \n");
     scanf("%d", &num1);

     printf(" give 2nd number for swap \n");
     scanf("%d", &num2);

     printf("  before swap 1st number is %d,2nd number is %d \n" , num1, num2 );
    

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf(" after swap 1st number %d, 2nd number is %d \n", num1,num2);
    return 0;

}