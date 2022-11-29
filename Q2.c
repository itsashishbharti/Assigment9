#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("\nPress a For Add");
    printf("\nPress b For Subtract");
    printf("\nPress c For Multiplication");
    printf("\nPress d  For Divison");
    printf("\nPress e For Exit\n");
    char option;
    scanf("%c",&option);

    int y,z;
    switch (option)
    {    
    case 'a':
        printf("\nEnter Your 1st Number=");
        scanf("%d",&y);
          printf("\nEnter Your 2nd Number=");
        scanf("%d",&z);
        printf("\nAddition of %d and %d=%d",y,z,y+z);
        break;
    case 'b':
        printf("\nEnter Your 1st Number=");
        scanf("%d",&y);
          printf("\nEnter Your 2nd Number=");
        scanf("%d",&z);
        printf("\nSubtract of %d and %d=%d",y,z,y-z);
        break;
    case 'c':
        printf("\nEnter Your 1st Number=");
        scanf("%d",&y);
          printf("\nEnter Your 2nd Number=");
        scanf("%d",&z);
        printf("\nMultiplication of %d and %d=%d",y,z,y*z);
        break;
    case 'd':
        printf("\nEnter Your 1st Number=");
        scanf("%d",&y);
          printf("\nEnter Your 2nd Number=");
        scanf("%d",&z);
        printf("\nDivision of %d and %d=%d",y,z,y/z);
        break;
    case 'e':
      exit(0);
        break;
    default:
        printf("\nPress Wronf Key");
        break;
    }
    return 0;
}