#include<conio.h>
#include<stdio.h>
void main()
{
    int n,d,s=0,temp;
    printf ("Enter a Number:");
    scanf ("%d",&n);
    temp=n;
    while (n!=0)
    {
        d=n%10;
        s=s+(d*d*d);
        n=n/10;
    }
    if (s==temp)
    {
        printf ("%d is a Armstrong Number",temp);
    }
    else
    {
        printf ("%d is not a Armstrong Number",temp);
    }
    getch();
}