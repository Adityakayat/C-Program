#include<stdio.h>
#include<conio.h>
void main ()
{
    // clescr();
    float a, b, sum, avg;
    printf("write any two numbers");
    scanf("%f%f", &a, &b);
    sum = a+b;
    avg = (a+b)/2;
    printf("sum = %f", sum);
    printf("average = %f", avg);
    getch();
}