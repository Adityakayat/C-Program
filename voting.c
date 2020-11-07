#include<stdio.h>
#include<conio.h>
void main()
{
    // clescr();
    int age;
    printf("Enter your age = ");
    scanf("%d", & age);
    if (age>= 18)
    {
        printf("You can vote");
    }
    else
    {
        printf("you can't vote");   
    }
    getch();
}