#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i,j,k,l;
    i = 5;
    j = 5;
    k = 7;
    l = 7;
    while(i<100)
    {
        printf("%d\n%d\n", i,k);
        i = i+j;
        j = j+2;
        k = k+l;
        l = l+2;
    }
    getch();
}