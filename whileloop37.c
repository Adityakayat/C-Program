#include<stdio.h>
#include<conio.h>
void main()
{
    //clrscr();
    int i, j, k;
    i = 1;
    j = 1;
    k = 1;
    while(i<100)
    {
        printf("%d\n", i);
        i = i +j*j;
        j = j+k;
        k = k+1;
    }
    getch();
}