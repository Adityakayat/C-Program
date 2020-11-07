#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i, j, k;
    i = 3;
    j = 1;
    k = 1;
    while(i<10000)
    {
        printf("%d\n", i);
        i = i*j +j;
        j = j+k;
        k = k+2;
    }
    getch();
}