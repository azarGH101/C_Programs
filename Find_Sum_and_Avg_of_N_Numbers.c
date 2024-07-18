/*THIS IS A BASIC BEGINNER C PROGRAM FOR ENTER N NUMBERS BY USER PROMPT
THEN FIND SUM AND AVG OF GIVEN N NUMBERS*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,num,sum=0;
    float avg;
    printf("\n\t**************************************************************");
    printf("\n\t\tSUM and AVERAGE OF N NUMBERS PROGRAM");
    printf("\n\t**************************************************************");

    printf("\n\tEnter N Value : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n\tEnter Number %d : ",i+1);
        scanf("%d",&num);
        sum += num;
    }

    avg = sum/n;

    printf("\n\tSum of Given Numbers : %d",sum);
    printf("\n\tAvg of Sum of Given Numbers : %.2f",avg);

    return 0;
}
