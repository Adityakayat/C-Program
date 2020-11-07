#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i, j;
    i = 1;
    j = 1;
    while(i<30)
    {
        printf("%d\n", i);
        i = i+j;
        j = j+1;
    }
    getch();
}