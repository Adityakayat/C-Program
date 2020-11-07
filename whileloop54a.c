#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int i,j;
    i = 8;
    j = 17;
    while(i<500)
    {
        printf("%d\n%d\n", i,j);
        i = i+ j;
        j = j+ i;
    }
    getch();
}