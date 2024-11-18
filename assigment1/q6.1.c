#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the x,y cordinates\n");
    scanf("%d,%d",&x,&y);

    if(x>0 && y>0)
    printf("(%d,%d) lies in 1at quadrant", x,y);

    else if(x<0 && y>0)
    printf("(%d,%d) lies in 2nd quadrant", x,y);

    else if(x<0 && y<0)
    printf("(%d,%d) lies in 3rd quadrant", x,y);

    else  if(x>0 && y<0)
    printf("(%d,%d) lies in 4th quadrant", x,y);

    else{
        printf(" bhai glt dala hai");
    }
return 0;

}