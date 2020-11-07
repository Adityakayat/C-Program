#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i,j,k;
    i = 3;
    j = 6;
    k = 9;
    while(i<100)
    {
        printf("%d\n%d\n%d\n", i,j,k);
        i = i+3;
        j = j+6;
        k = k+9;
    }
    getch();
}
