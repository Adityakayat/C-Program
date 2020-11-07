#include<stdio.h>
#include<conio.h>
void main()
{
//clrscr();
float l,b,r,h,s,a,area1, area2, area3, area4;
printf("Enter length and breadth of rectangle\n" "Enter radius\n" "Enter Height and base\n" "Enter side" );
scanf("%f%f%f%f%f%f",&l,&b,&r,&h,&s,&a);
area1 = l*b;
area2 = 3.14*r*r;
area3 = 0.5*h*s;
area4 = a*a;
printf("area1 = %f\n", area1);
printf("area2 = %f\n", area2);
printf("area3 = %f\n", area3);
printf("area4 = %f\n", area4);
}