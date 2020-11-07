#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i, j;
    i = 1;
    j = 11;
    while(i<111111)
    {
        printf("%d\n", i);
        i = i + j;
        j = j*10 +1;
    }
    getch();
}