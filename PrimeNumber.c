#include<conio.h>
#include<stdio.h>
int prime (int n)
{
    int i,c=0;
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            c++;
            return 1;
        }
    }
    if (c==0)
    {
        return 0;
    }
}
void main()
{
    int n,res;
    printf ("Enter a Number:");
    scanf ("%d",&n);
    res=prime (n);
    if (res==1)
    {
        printf ("%d is not a Prime Number",n);
    }
    else
    {
        printf ("%d is a Prime Number",n);
    }
    getch();
}