#include<conio.h>
#include<stdio.h>
void main()
{
    int n,a,b,c,i;
    printf ("Enter Number of Terms:");
    scanf ("%d",&n);
    a=0,b=1;
    printf ("\nFibonacci Series of %d Terms\n\n",n);
    printf ("%d,%d",a,b);
    for (i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf (",%d",c);
    }
    getch();
}