#include<stdio.h>
int main()
{
    int a;
    printf("Enter your month=  ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("\n 31 Days in %dst Month",a);
        break;
    case 2:
    printf("\n 28 Days in %dnd Month",a);
        break;
    case 3:
        printf("\n 31 Days in %drd Month",a);
        break;
    case 4:
    printf("\n 30 Days in  %dth Month",a);
        break;
    case 5:
        printf("\n 31 Days in %dth Month",a);
        break;
    case 6:
    printf("\n 30 Days in %dth Month",a);
        break;
    case 7:
        printf("\n 31 Days in %dth Month",a);
        break;
    case 8:
    printf("\n 31 Days in %dth Month",a);
        break;
    case 9:
        printf("\n 30 Days in %dth Month",a);
        break;
    case 10:
    printf("\n 31 Days in %dth Month",a);
        break;
    case 11:
        printf("\n 30 Days in %dth Month",a);
        break;
    case 12:
    printf("\n 31 Days in %dth Month",a);
        break;
    default:
        printf("\n We hanve only 12 Months you Entered Wrong Month",a);
        break;
    }
    return 0;
}