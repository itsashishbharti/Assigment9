#include<stdio.h>
int main()
{
    int option;
    printf("\n Enter Your Character=");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
    printf("good");
    break;
    case 2:
    printf("better");
    break;
    case 3:
    printf("best");
    break;
    default:
    printf("invalid");
    break;
    }
    return 0;
}