#include<stdio.h>
int main()
{
    int rows;
    printf(" how many rows do you wanted");
    scanf("%d", &rows);

    for(int i=1;i<=rows;i++){
    for(int j=1;j<=i;j++){
    if((j%2)==0)
    printf("1");
     else
    printf("0");

    }
    printf("      ");

        for(int j=1; j<=i;j++ )
        {
              if((j%2)==0)
        printf("1");
        else
        printf("0");
        }
       printf("\n");
    }
   


    return 0;

}




