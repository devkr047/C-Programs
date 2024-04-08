#include<conio.h>
#include<stdio.h>
void main()
{
    int l,b,area,perimeter;
    printf ("Enter Length:");
    scanf ("%d",&l);
    printf ("Enter Breadth:");
    scanf ("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf ("\nArea of Rectangle:%d",area);
    printf ("\nPerimeter of Rectangle:%d",perimeter);
    getch();
}