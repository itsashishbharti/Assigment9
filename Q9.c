#include<stdio.h>
int main()
{
        int a;
    printf("\nEnter Your Numer=");
    scanf("%d",&a);
    switch(a%2==0)
    {
        case 1:
        printf("\n Upper  Nearest Odd Of %d  Is  %d",a,a+1);
        break;
    }
    return 0;

}