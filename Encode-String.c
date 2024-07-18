#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\t**************************************************************");
    printf("\n\t\tSIMPLE STRING ENCODING");
    printf("\n\t**************************************************************");

    char str[10],estr[10];

    printf("\n\tEnter a 5 Letter Word : ");
    gets(str);

    printf("\n\tACTUAL STRING BEFORE ENCODING : %s",str);

    str[0] = str[0]-30;
    str[1] = str[1]-30;
    str[2] = str[2]-30;
    str[3] = str[3]-30;
    str[4] = str[4]-30;

    printf("\n\tENCODED STRING BEFORE ENCODING : %s",str);

    return 0;
}
