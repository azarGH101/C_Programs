/**THIS IS A C PROGRAM FOR ANALYSE GIVEN STRING
1. COUNT ALPHABETS
2. COUNT DIGITS
3. COUNT EXTRA CHARACTERS*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\t**************************************************************");
    printf("\n\t\tTEXT ANALYSIS PROGRAM");
    printf("\n\t**************************************************************\n");

    char str[80];
    int i,lc=0,dc=0,wsc=0,oc=0;

    printf("\n\tEnter the Character Array (String) : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            lc++;
        else if(str[i]>='0' && str[i]<='9')
            dc++;
        else if(str[i]==' ' || str[i]=='\t' || str[i]=='\0')
            wsc++;
        else
            oc++;
    }

    printf("\n\tNo. of Letters in Given String : %d",lc);
    printf("\n\tNo. of Digits in Given String : %d",dc);
    printf("\n\tNo. of White Space Characters in Given String : %d",wsc);
    printf("\n\tNo. of other Characters in Given String : %d",oc);

    return 0;
}
