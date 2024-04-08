#include<conio.h>
#include<stdio.h>
void main()
{
    int n;
    printf ("Enter a Number:");
    scanf ("%d",&n);
    if (n==0)
    {
        printf ("Number is Zero");
    }
    else if (n>0)
    {
        printf ("Number is Positive");
    }
    else
    {
        printf ("Number is Negative");
    }
    getch();
}