#include<stdio.h>
#include<conio.h>
void main ()
{
    //clrscr();
    int ch;
    float r, s, h, p, l, b, area1, area2, area3, area4;
    printf("1 area of circle\n");
    printf("2 area of square\n");
    printf("3 area of triangle\n");
    printf("4 area of rectangle\n");
    printf("Enter your choice = ");
    scanf("%d",& ch);
    switch(ch)
    {
        case 1:
        {
            printf("Enter radius of circle = ");
            scanf("%f",& r);
            area1 = 3.14*r*r;
            printf("Area of circle = %f", area1);
            break;
        }
        case 2:
        {
            printf("Enter the side of the square = ");
            scanf("%f",& s);
            area2 = s*s;
            printf("Area of square = %f", area2);
            break;
        }
        case 3:
        {
            printf("Enter height and base of the triangle = ");
            scanf("%f%f",&h,&p);
            area3 = 0.5*p*h;
            printf("Area of the triangle = %f", area3);
            break;
        }
        case 4:
        {
            printf("Enter length and breadth of rectangle = ");
            scanf("%f%f", &l,&b);
            area4 = l*b;
            printf("Area of rectangle = %f", area4);
            break;
        }
        defaut:
        {

        }
    }
}