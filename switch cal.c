#include<stdio.h>
int main ()
{
    int a,b,choice ;

    printf("welcome to the calculator :\n"
           "1.ADDITION\n 2.SUBSTRACTION\n 3.MULTIPLICATION\n 4.DIVISION\n ");
    scanf ("%d",&choice);

    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the secend  number : ");
    scanf("%d",&b);

    switch(choice)
    {
        case 1: printf ("%d+%d =%d\n",a,b,(a+b));
               break;

       case 2 : printf ("%d-%d=%d\n",a,b,(a+b));
                break;

       case 3 : printf ("%d*%d=%d\n",a,b,(a*b));
                break;

       case 4: if (b!=0)

               printf ("%d/%d=%d\n",a,b,(a/b));
               else
               printf (" sorry!number cannot be divided by 0\n");
               break ;

      default : printf ("oops! your choice is wrong!!!\n");
               break;

    }
}
