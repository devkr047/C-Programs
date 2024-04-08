#include<conio.h>
#include<stdio.h>
void main()
{
    int n,s=0,sq,d;
    printf ("Enter a Number:");
    scanf ("%d",&n);
    sq=n*n;
    while (sq!=0)
    {
        d=sq%10;
        s=s+d;
        sq=sq/10;
    }
    if (s==n)
    {
        printf ("%d is a Neon Number",n);
    }
    else
    {
        printf ("%d is not a Neon Number",n);
    }
    getch();
}