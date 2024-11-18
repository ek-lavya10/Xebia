#include<stdio.h>
int main()
{
    int a , b, hcf;
    printf(" enter two number for HCF");
    scanf("%d%d", &a,&b);

    for (hcf = (a < b ? a : b); hcf>=1; hcf-- )
    {
        if ( a% hcf== 0 && b % hcf==0)
        {
            printf("HCF is : %d"  , hcf );
            break;
        }
    }
    return 0;
}