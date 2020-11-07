#include<stdio.h>
#include<conio.h>
void main ()
{
 //clrscr();
 int i, j;
 i = 1;
 j = 10;
 while(i<1000000)
 {
     printf("%d\n", i);
     i = i + j;
     j = j*10;
 }
 getch();
}
