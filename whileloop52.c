#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i,j;
    i = 0;
    j = 1;
    while(i<50)
    {
        printf("%d\n%d\n", i,j);
        i = i+j;
        j = j+i;
    }
    getch();
}