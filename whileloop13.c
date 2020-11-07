#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i,j;
    i = 0;
    j = 2;
    while(i<1000)
    {
        printf("%d\n", i);
        i = i+j;
        j = j+2;
    }
    getch();
}