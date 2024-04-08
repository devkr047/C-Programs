#include<conio.h>
#include<stdio.h>
void main()
{
    float n;
    printf ("Enter a Floating-Point Number:");
    scanf ("%f",&n);
    char c[20];
    sprintf (c,"%.2f",n);
    printf ("\nString Representation:%s",c);
    getch();
}