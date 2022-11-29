#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float x,y;
    printf("Enter Value in a=");
    scanf("%d",&a);
    printf("\n Enter Value In b=");
    scanf("%d",&b);
    printf("\n Enter value in c=");
    scanf("%d",&c);
    d=b*b-4*a*c;
    switch(d>0 && d!=0)
    {
        case 0:
        printf("\n No Output...\n");
        break;
        case 1:
        x=(-b+sqrt(d))/(2*a);
        y=(-b-sqrt(d))/(2*a);
        printf("\nRoots Are :%f____%f",x,y);
        break;
    }
    return 0;
}