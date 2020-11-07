#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i,j;
    i = 1;
    j = 2;
    while(i<1000)
    {
        printf("%d\n%d\n", i,j);
        i = i*j;
        j = j*i;
    }
    getch();
}