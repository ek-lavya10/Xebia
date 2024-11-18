#include<stdio.h>
int main()
{
    int n, arm =0,r,c;
    printf("enter number : ");
    scanf("%d", &n);
     c=n;
     while (n>0)
     {
        r=n%10;
        arm=r*r*r + arm;
        n=n/10;
     }
     if (c==arm)
     printf(" number is armstrong");
     else
     printf(" number is not armstrong"); 
     return 0;
}