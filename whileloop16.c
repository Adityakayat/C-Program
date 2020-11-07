#include<stdio.h>
#include<conio.h>
void main()
{
    //clrscr();
    int i,j;
    i = 2;
    j = 5;
    while(i<500)
    {
        printf("%d\n", i);
        i = i+j;
        j = j*2;
    }
    getch();
}