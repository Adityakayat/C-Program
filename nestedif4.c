#include<stdio.h>
#include<conio.h>
void main ()
{
    // clrscr();
    int a,b,c,d;
    printf("Enter any four numbers");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a>b)
    {
        if(a>c)
        {
        
            if(a>d)
            {
            printf("a is the largest no. = %d", a);
            }
            else
            {
            printf("d is the largets no. = %d", d);
            }
        }
        else
        {
            if(c>d)
            {
            printf(" c is the largest no. = %d", c);
            }
            else
            {
            printf("d is the largest no. = %d", d);
            }
        }
    }
    else
    {
       if(b>c)
       {
           if(b>d)
           {
           printf("b is the largest no. = %d", b);
           }
           else
           {
           printf("d is the largest no. = %d", d);
           }
       }
       else
       {
           if(c>d)
           {
           printf("c is the largest no. = %d", c);
           }
           else
           {
           printf("d is the largest no. = %d", d);
           }  
       }
    }
   getch(); 
}