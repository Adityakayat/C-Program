#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i , j;
    i = 3;
    j = 2;
    while(i<10000)
    {
        printf("%d\n", i);
        i = i*j + j;
        j = j+2;
    } 
    getch();
}