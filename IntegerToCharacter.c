#include<conio.h>
#include<stdio.h>
void main()
{
    char c;
    int n;
    printf ("Enter a Number:");
    scanf ("%d",&n);
    c=(char)n;
    printf ("\nCharacter Representation:%c",c);
    getch();
}