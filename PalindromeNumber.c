#include<conio.h>
#include<stdio.h>
void main()
{
    int n,r=0,d,temp;
    printf ("Enter a Number:");
    scanf ("%d",&n);
    temp=n;
    while (n!=0)
    {
        d=n%10;
        r=(r*10)+d;
        n=n/10;
    }
    if (r==temp)
    {
        printf ("%d is a Palindrome Number",temp);
    }
    else
    {
        printf ("%d is not a Palindrome Number",temp);
    }
    getch();
}