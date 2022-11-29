#include<stdio.h>
int main()
{
    int a;
    printf("Enter Your day =");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("\nToday Is Sunday");
        break;
    case 2:
    printf("\n Today Is Monday");
        break;
    case 3:
        printf("\n Today Is Tuesday");
        break;
    case 4:
        printf("\n Today Is Wednesday");
        break;
    case 5:
        printf("\n Today Is Thursday");
        break;
    case 6:
        printf("\n Today Is Friday");
        break;
    case 7:
        printf("\n Today Is Saturday");
    default:
        printf("\n error.......");
        break;
    }
    return 0;
}