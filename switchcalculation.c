#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int a, b, c, ch;
    float d;
    printf("Enter any two numbers = ");
    scanf("%d%d", &a, &b);
    printf("1 add\n");
    printf("2 subtraction\n");
    printf("3 multiplication\n");
    printf("4 division\n");
    printf("enter your choice");
    scanf("%d", &ch);
    switch(ch)
    {
     case 1:
     {
         c=a+b;
         printf("sum = %d", c);
         break;
     }
     case 2:
     {
         c=a-b;
         printf("subtraction = %d", c);
         break;
     }
     case 3:
     {
         c=a*b;
         printf("multiplication = %d", c);
         break;
     }
     case 4:
     {
         d=(float)a/b;
         printf("division = %f", d);
         break;
     }
     defaut:
     {

     }
    }
    getch();
}