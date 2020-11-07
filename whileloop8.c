#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i, j;
    i = 8;
    j = 80;
    while(i<8000000)
    {
        printf("%d\n", i);
        i = i +j ;
        j = j*10;
    }
    getch();
}