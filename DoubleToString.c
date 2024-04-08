#include<conio.h>
#include<stdio.h>
void main()
{
    double n;
    printf ("Enter a Double Number:");
    scanf ("%lf",&n);
    char c[20];
    sprintf (c,"%.2lf",n);
    printf ("\nString Representation:%s",c);
    getch();
}