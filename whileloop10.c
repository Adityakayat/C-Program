#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i, j;
    i = 8;
    j = 79;
    while(i<800000000)
    {
        printf("%d\n", i);
        i = i + j;
        j = j*10 + 9;
    }
    getch();
}