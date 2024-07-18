#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\t**************************************************************");
    printf("\n\t\tNUMBER PYRAMID PROGRAM");
    printf("\n\t**************************************************************\n");

    int i,j,k,n,cv,sv,val;

    printf("\n\tEnter N Value : ");
    scanf("%d",&n);

    printf("\n\tEnter Space Value : ");
    scanf("%d",&sv);

    for(i=1,j=1;i<=n;i++,j+=2)
    {
        printf("\n");
        for(k=1;k<=sv-i;k++)
            printf(" ");

        if(j==1)
            printf("%d",j%10);

        else
        {
            val=i;
            for(k=1;k<=j;k++)
            {
                if(k==1)
                    printf("%d",val%10);
                else
                {
                    cv=(j+1)/2;
                    if(k<=cv)
                    {
                        val++;
                        printf("%d",val%10);
                    }
                    else
                    {
                        val--;
                        printf("%d",val%10);
                    }
                }
            }
        }
    }

    return 0;
}
