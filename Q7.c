#include<stdio.h>
int main()
{
    float unit,temp;
    float per;
    printf("\n Enter Your Electricity Unit=");
    scanf("%f",&unit);
    switch(unit<=50)
    {
        case 0:
            switch(unit>50 && unit <=150)
            {
                case 0:
                    switch(unit>150 && unit <=250)
                    {
                        case 0:
                            switch(unit>250)
                            {
                                case 0:
                                    printf("\n System Error...\n");
                                break;
                                case 1:
                                    temp=unit-250;
                                    unit=(temp*1.50)+25+75+120;
                                     printf("\n Your bill  is= %.2f",unit);
                                     printf("\n Surcharge Ammount 20%%= %f",per);
                                     printf("\n Total Bill is \t\t=%f",unit+per);
                                break;
                            }
                        break;
                        case 1:
                          temp=unit-150;
                          unit=(temp*1.20)+25+75;
                          per=unit*20/100;
                         printf("\n Your bill  is= %.2f",unit);
                         printf("\n Surcharge Ammount 20%%= %f",per);
                         printf("\n Total Bill is \t\t=%f",unit+per);
                        break;
                    }
                    break;
                case 1:
                     temp=unit-50;
                     unit=(temp*0.75)+25;
                     per=unit*20/100;
                       printf("\n Your bill  is= %.2f",unit);
                       printf("\n Surcharge Ammount 20%%= %f",per);
                       printf("\n Total Bill is \t\t=%f",unit+per);
                break;

            }
            break;
        case 1:
            unit=unit*0.50;
            per=unit*20/100;
            printf("\n Your bill  is= %f",unit);
            printf("\n Surcharge Ammount 20%%= %f",per);
            printf("\n Total Bill is \t\t=%f",unit+per);
        break;
    }
    return 0;
}