#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("\n\t**************************************************************");
    printf("\n\t\tPRIME NUMBER TABLE PROGRAM");
    printf("\n\t**************************************************************\n");

    int i,j,n,pn[100],k=2,prime=0;

    printf("\n\tEnter N Value : ");
    scanf("%d",&n);

    pn[0]=1;
    pn[1]=2;

    for(i=3;i<=n;i+=2)
    {
        prime=0;
        for(j=1;j<=sqrt(i);j++)
        {
            if(i%j==0 && j>1)
            {
                prime=1;
                break;
            }
        }
        if(prime==0)
        {
            pn[k]=i;
            k++;
        }
    }

    printf("\n\tPrime Number From 1 to %d : ",n);
    printf("\n\tS.No.\t\tPrime Number");

    for(i=0;i<k;i++)
    {
        printf("\n\t%d\t\t%d",i+1,pn[i]);
    }

    return 0;
}
