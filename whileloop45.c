#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i,j, k;
    i = 1;
    j = 1;
    k = 2;
    while(i<100000)
    {
        printf("%d\n", i);
        i = i+ j*j*j;
        j = j+k;
        k = k+2;
    }
    getch();
}