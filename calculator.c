#include<stdio.h>
int main()
{
char ch;

float x,y,output;


printf( "welcome to the calculator!"
"\n Which operation do u want to do?"
" \n '+' for addition\n '-' for substraction\n '*' for multiplication"
"\n '/' for division\n");
scanf("%c",&ch);
printf("Enter the 1st value:");
scanf("%f",&x);
printf("Enter the 2nd value:");
scanf("%f",&y);

 if (ch=='+'||ch=='a')
{

output=x+y;
printf("%0.2f+%0.2f=%0.2f",x,y,output);

}
else if(ch=='-'||ch=='s')
{

    output=x-y;
    printf("%0.2f-%0.2f=%0.2f",x,y,output);
}
else if (ch=='*'||ch=='m')
{
    output=x*y;
    printf("%0.2f*%0.2f is=%0.2f",x,y,output);
}

else if (ch=='/'||ch=='d')
{
    output=x/y;
    printf("%0.2f/%0.2f 0is=%0.2f",x,y,output);

}
else
{


printf("The option is wrong!");

}
return 0;

}
