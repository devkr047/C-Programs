#include<conio.h>
#include<stdio.h>
void main()
{
    int a,b;
    printf ("Enter First Number:");
    scanf ("%d",&a);
    printf ("Enter Second Number:");
    scanf ("%d",&b);
    printf ("\nGCD of %d and %d:%d",a,b,gcd (a,b));
    getch();
}
int gcd (int a,int b)
{
    if (a==0)
    {
        return b;
    }
    else if (b==0)
    {
        return a;
    }
    else if (a==b)
    {
        return a;
    }
    else if (a>b)
    {
        return gcd (a-b,b);
    }
    else
    {
        return gcd (a,b-a);
    }
}