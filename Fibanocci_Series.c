#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\t**************************************************************");
    printf("\n\t\tFIIBANOCCI SERIES PROGRAM");
    printf("\n\t**************************************************************\n");

    int i,n,fs[100];

    printf("\n\tEnter N Value : ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        //First 2 values of fibanocci series is 1
        if(i==0 || i==1)
            fs[i]=1;
        else
            fs[i]=fs[i-1]+fs[i-2];
    }

    printf("\n\tFibonacci Series From 1 to %d = ",n);
    printf("\n\tS.No.\t\tFIB0NACCI VALUE");
    for(i=0;i<n;i++)
    {
        printf("\n\t%d\t\t%d",i+1,fs[i]);
    }

    return 0;
}
