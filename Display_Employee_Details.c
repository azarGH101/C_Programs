#include<stdio.h>
#include<conio.h>

int main()
{
    char emp1[]="Azar",emp2[]="Sam",emp3[]="Haji";
    float azar_bp,azar_dp,azar_ntp;
    float sam_bp,sam_dp,sam_ntp;
    float haji_bp,haji_dp,haji_ntp;

    // azar Data and Calculation
    azar_bp = 25000;
    azar_dp = azar_bp * (15.0/100);
    azar_ntp = azar_bp + azar_dp;

    // sam Data and Calculation
    sam_bp = 28000;
    sam_dp = sam_bp * (15.0/100);
    sam_ntp = sam_bp + sam_dp;

    // haji Data and Calculation
    haji_bp = 33000;
    haji_dp = haji_bp * (15.0/100);
    haji_ntp = haji_bp + haji_dp;

    printf("\n*************************************************************************");
    printf("\n\tS.No.\tName\t\t\tBasic_Pay\tD_Pay\tNet_Pay");
    printf("\n*************************************************************************");

    printf("\n\t1\t%s\t\t\t%.2f\t%.2f\t%.2f",emp1,azar_bp,azar_dp,azar_ntp);
    printf("\n\t2\t%s\t\t\t%.2f\t%.2f\t%.2f",emp2,sam_bp,sam_dp,sam_ntp);
    printf("\n\t3\t%s\t\t\t%.2f\t%.2f\t%.2f",emp3,haji_bp,haji_dp,haji_ntp);

    float total1 = azar_bp+sam_bp+haji_bp;
    float total2 = azar_dp+sam_dp+haji_dp;
    float total3 = azar_ntp+sam_ntp+haji_ntp;

    printf("\n---------------------------------------------------------------------------");
    printf("\n\t\tTOTAL\t\t\t%.2f\t%.0f\t%.2f",total1,total2,total3);
    printf("\n---------------------------------------------------------------------------");
}
