#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\t**************************************************************");
    printf("\n\tELECTRICITY BILL CALCULATOR USING SWITCH CASE PROGRAM");
    printf("\n\t**************************************************************\n");

    int unit;
    float bill;

    printf("\n\tEnter the Unit of Electricity Consuming by the User : ");
    scanf("%d",&unit);

    switch(unit<=50)
    {
        case 0:
            switch(unit<=150)
            {
                case 0:
                    switch(unit<=250)
                    {
                        case 0:
                            switch(unit>250)
                            {
                                case 1:
                                    bill = unit*1.50;
                                    bill += (20.0/100)*bill;
                                    break;
                            }
                            break;
                        case 1:
                            bill = unit*1.20;
                            bill += (20.0/100)*bill;
                            break;
                    }
                    break;
                case 1:
                    bill = unit*0.75;
                    bill += (20.0/100)*bill;
                    break;
            }
            break;
        case 1:
            bill = unit*0.5;
            bill += (20.0/100)*bill;
            break;
    }

    printf("\n\tTotal Bill Amount : %.3f",bill);

    return 0;
}
