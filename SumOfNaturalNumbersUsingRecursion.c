#include<conio.h>
#include<stdio.h>
int sum (int n)
{
    if (n>=1)
    {
        return n+sum (n-1);
    }
    else
    {
        return 0;
    }
}
void main()
{
    int n,res;
    printf ("Enter Number of Terms:");
    scanf ("%d",&n);
    res=sum (n);
    printf ("Sum of %d Natural Numbers:%d",n,res);
    getch();
}