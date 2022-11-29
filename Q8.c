#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter Your Numer=");
    scanf("%d",&a);
    switch(a>1)
    {
        case 0:
        a=a*(-1);
        printf("\n Number is = %d",a);
        break;
        case 1:
        a=a*(-1);
        printf("\n Number is= %d",a);
        break;
    }
    return 0;
}