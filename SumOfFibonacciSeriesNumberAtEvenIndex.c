#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf ("Enter Number of Terms:");
    scanf ("%d",&n);
    int a[n];
    a[0]=0,a[1]=1;
    for (i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for (i=0;i<=n;i++)
    {
        if (i%2==0)
        {
            s=s+a[i];
        }
    }
    printf ("Sum of Elements of Fibonacci Series at Even Index:%d",s);
    getch();
}