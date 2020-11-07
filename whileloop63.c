#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int n,a,b,c,p1,p2,p3,p4,p5,p6;
    printf("Enter any number = ");
    scanf("%d", &n);
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    p1 = a*100 + b*10 + c;
    p2 = a*100 + c*10 + b;
    p3 = b*100 + a*10 + c;
    p4 = b*100 + c*10 + a;
    p5 = c*100 + a*10 + b;
    p6 = c*100 + b*10 + a;
    printf("p1 = %d\n", p1);
    printf("p2 = %d\n", p2);
    printf("p3 = %d\n", p3);
    printf("p4 = %d\n", p4);
    printf("p5 = %d\n", p5);
    printf("p6 = %d\n", p6);
    getch();
}