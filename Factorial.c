#include<conio.h>
#include<stdio.h>
void main()
{
    int n,p=1;
    printf ("Enter a Number:");
    scanf ("%d",&n);
    while (n!=0)
    {
        p=p*n;
        n--;
    }
    printf ("Factorial:%d",p);
    getch();
}