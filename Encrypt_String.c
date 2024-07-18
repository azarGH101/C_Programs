#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\t**************************************************************");
    printf("\n\t\tSTRING ENCRYPTION PROGRAM");
    printf("\n\t**************************************************************");

    char str[80];
    int i;

    printf("\n\tEnter the String : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        str[i]--;
    }

    printf("\n\tEncrypted String : %s",str);

    return 0;
}
