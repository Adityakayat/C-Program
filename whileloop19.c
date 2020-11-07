#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i,j,k,l;
    i = 1;
    j = 2;
    k = 8;
    l = 9;
    while(i<100)
    {
        printf("%d\n%d\n", i,k);
        i = i+j;
        k = k+l;
        j = j+2;
        l = l+2;
    }
    getch();
}