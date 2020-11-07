#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i,j;
    i = 6;
    j = 2;
    while(i<100)
    {
        printf("%d\n%d\n", i,j);
        i = i+ j;
        j = j+i;
    }
    getch();
}