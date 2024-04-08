#include<conio.h>
#include<stdio.h>
int fact (int n)
{
    int mul=1;
    if (n>=1)
    {
        return n*fact (n-1);
    }
    else
    {
        return 1;
    }
}
void main()
{
    int n,res;
    printf ("Enter a Number:");
    scanf ("%d",&n);
    res=fact (n);
    printf ("Factorial of %d:%d",n,res);
    getch();
}