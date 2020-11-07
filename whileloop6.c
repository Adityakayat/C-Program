#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i, j;
    i = 1;
    j = 2;
    while(i<40)
    {
        printf("%d\n", i);
        i = i + j;
        j = j + 2;
    }
    getch();
}