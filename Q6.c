 #include<stdio.h>
int main()
{
    int a;
    printf("Enter Your Years=");
    scanf("%d",&a);
    switch (((a%4==0)&&(a%100!=0))||(a%400==0))
    {
    case 1:
        printf("\n Year Is Leap Year");
        break;
    default:
        printf("\n Year Is Not Leap Year");
        break;
    }
    return 0;
}
