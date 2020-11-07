#include<stdio.h>
#include<conio.h>
void main()
{
    float c, f;
    printf("mention temperature in fareneight = ");
    scanf("%f",& f);            
    c = (f-32)*5/9 ;
    printf("celcius = %f", c);
    getch();
}