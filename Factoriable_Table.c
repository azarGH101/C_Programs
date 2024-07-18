#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\t**************************************************************");
    printf("\n\t\tFACTORIAL TABLE PROGRAM");
    printf("\n\t**************************************************************\n");

    int i,fact=1,n;

    printf("\n\tEnter N Value : ");
    scanf("%d",&n);

    printf("\n\tNo.\t\tFactorial");

    for(i=1;i<=n;i++)
    {
        fact *= i;
        printf("\n\t%d\t\t%d",i,fact);
    }

    return 0;
}
