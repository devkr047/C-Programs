#include<conio.h>
#include<stdio.h>
void main()
{
    int year;
    printf ("Enter Year:");
    scanf ("%d",&year);
    if (year%4==0)
    {
        printf ("%d is a Leap Year",year);
    }
    else
    {
        printf ("%d is not a Leap Year",year);
    }
    getch();
}