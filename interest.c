#include<stdio.h>
#include<conio.h>
void main()
{
    float p, t, r, si ;
    printf("write the principal amount");
    scanf("%f",&p);
    printf("write the time in years");
    scanf("%f",&t);
    printf("write the rate");
    scanf("%f",&r);
    si = (p*t*r)/100;
    printf("simple interest is = %f", si);
    getch();
}