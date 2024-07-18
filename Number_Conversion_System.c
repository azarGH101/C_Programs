/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    /*printf("\n\t**************************************************************");
    printf("\n\t\t\tBASIC NUMBER CONVERSION SYSTEM PROGRAM");
    printf("\n\t**************************************************************");

    printf("\n\t1. Binary to Others");
    printf("\n\t2. Decimal to Others");
    printf("\n\t3. Octal to Others");
    printf("\n\t4. Hexa-Decimal to Others");

    int opt,bin,dec,oct,tmp,tmp1,i,j,r,res=0,cnt,bin1[10],dc;
    char str[10],str1[10],ropt,hex[10];

    do
    {
        printf("\n\tEnter the Option Value (1-4) : ");
        scanf("%d",&opt);

        switch(opt)
        {
                case 1:
                    printf("\n\tEnter a Binary Number : ");
                    scanf("%d",&bin);
                //CONVERT TO DECIMAL
                res=0;
                tmp = bin;
                i=0;
                while(tmp>0)
                {
                        r=tmp%10;
                    res += r*pow(2,i);
                    i++;
                    tmp /= 10;
                }
                dec = res;
                //-----------------------------------
                //CONVERT TO OCTAL
                tmp = dec;
                res=i=0;
                while(tmp>0)
                {
                    r=tmp%8;
                    res += r*pow(10,i);
                    i++;
                    tmp /= 8;
                }
                oct = res;
                //-----------------------------------
                //CONVERT TO HEXA DECIMAL
                tmp = dec;
                j=0;
                tmp1=tmp;
                while(tmp1>0)
                {
                    tmp1 /= 16;
                    j++;
                }
                cnt=j;
                j--;
                while(tmp>0)
                {
                    r=tmp%16;
                    if(r<10)
                        hex[j]=48 + r;  //add ascii value for get real value
                    else
                    {
                        hex[j]=55 + r;  //add ascii value for get real value
                    }
                    tmp /= 16;
                    j--;
                }
                printf("\n\tDecimal Value From %d = %d",bin,dec);
                printf("\n\tOctal Value From %d = 0%d",bin,oct);
                printf("\n\tHexa Decimal Value From %d = ",bin);
                for(i=0;i<cnt;i++)
                {
                    printf("%c",hex[i]);
                }
                break;
                case 2:
                    printf("\n\tEnter a Decimal Number : ");
                    scanf("%d",&dec);
                    //CONVERT TO BINARY
                    tmp=dec;
                    i=0;
                    while(tmp>0)
                    {
                        bin1[i]=tmp%2;
                        i++;
                        tmp /= 2;
                    }
                    dc=i-1;
                    //CONVERT TO OCTAL
                    tmp = dec;
                    res=i=0;
                    while(tmp>0)
                    {
                        r=tmp%8;
                        res += r*pow(10,i);
                        i++;
                        tmp /= 8;
                    }
                    oct = res;

                    //CONVERT TO HEXA DECIMAL
                    tmp = dec;
                    j=0;
                    tmp1=tmp;
                    while(tmp1>0)
                    {
                        tmp1 /= 16;
                        j++;
                    }
                    cnt=j;
                    j--;
                    while(tmp>0)
                    {
                        r=tmp%16;
                        if(r<10)
                            hex[j]=48 + r;  //add ascii value for get real value
                        else
                        {
                            hex[j]=55 + r;  //add ascii value for get real value
                        }
                        tmp /= 16;
                        j--;
                    }
                    printf("\n\tBinary Value of %d = ",dec);
                    for(i=dc;i>=0;i--)
                    {
                        printf("%d",bin1[i]);
                    }
                    printf("\n\tOctal Value of %d = %d",dec,oct);
                    printf("\n\tHexa Decimal Value From %d = ",dec);
                    for(i=0;i<cnt;i++)
                    {
                        printf("%c",hex[i]);
                    }
                break;
                default:
                    printf("\n\tInvalid Option");
        }

        printf("\n\tDo You Want to Continue? (Y/N ) : ");
        scanf(" %c",&ropt);
    }while(ropt=='Y' || ropt=='y');*/

    char str[]="aaaaaaaaaaaa",res[10],num[10];
    int x=0,i,j=0,s=12,k;
    for(i=0;i<s;i++)
    {
        x++;
        if(i==s-1)
        {
            if(x<10)
                res[j++]=x+'0';
            else
            {
                //k=0;
                sprintf(num,"%d",x);
                for(k=0;num[k]!='\0';k++)
                    res[j++]=num[k];
            }
            res[j++]=str[i];
            x=0;
        }
    }
    res[j]='\0';
    printf("\n\tResult = %s",res);

    return 0;
}
