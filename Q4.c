#include<stdio.h>
#include<stdlib.h>
int main()
{
    char  option; 
    int side1,side2,side3;
      printf("\n Press a. Check whether a given set of three numbers are lengths of an isosceles triangle or not");
      printf("\n Press b. Check whether a given set of three numbers are lengths of sides of a rightangled triangle or not");
      printf("\n Press c. Check whether a given set of three numbers are equilateral triangle or not");
      printf("\n Press d. Exit");


    puts("\n Enter Your Character=");
    scanf("%c",&option);
    switch (option)
    {
    case 'a':
        printf("\nEnter Value in Side1=");
        scanf("%d",&side1);
        printf("\nEnter Value in Side2=");
        scanf("%d",&side2);
        printf("\nEnter Value in Side2=");
        scanf("%d",&side3);
         switch(side1 == side2 || side2 == side3 || side3 == side1)
         {
            case 1:
             printf("The given Triangle is isosceles");
             break;
             case 0:
            printf("\nTriangle is Not Isoscelese Triangle");
            break;
        }
        break;
    case 'b':
         printf("\nEnter Value in Side1=");
        scanf("%d",&side1);
        printf("\nEnter Value in Side2=d");
        scanf("%d",&side2);
        printf("\nEnter Value in Side2=");
        scanf("%d",&side3);
            switch((side1*side1)+(side2*side2)==(side3*side3) || (side1*side1)+(side3*side3)==(side2*side2) || (side2*side2)+(side3*side3)==(side1*side1) )
         {  
		    case 1:
             printf("It is a right angle triangle!\n"); 
             break; 
            case 0:
		      printf("It is not a right angle triangle!\n"); 
              break;
		  }
        break;
    case 'c':
         printf("\nEnter Value in Side1=");
        scanf("%d",&side1);
        printf("\nEnter Value in Side2=");
        scanf("%d",&side2);
        printf("\nEnter Value in Side2=");
        scanf("%d",&side3);
          switch(side1 == side2 && side2 == side3)
          {
            case 1:
             printf("The Given Triangle is equilateral");
             break;
            case 0:
            printf("\n The Given Triangle is Not Equilateral");
            break;
          }
          break;
    case 'd':
        exit(0);
        break;
    default:
        printf("\n Wrong");
        break;
    }
    return 0;
}