#include<stdio.h>
#include<conio.h>
void main()
{
    //clrscr();
    int i,j,k;
    i = 2;
    j = 3;
    k = 5;
    while(i<100)
    {
        printf("%d\n%d\n%d\n", i,j,k);
        i = i+4;
        j = j+4;
        k = k+4;
    }
    getch();
}