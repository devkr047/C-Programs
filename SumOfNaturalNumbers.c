#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf ("Enter Number of Terms:");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        s+=i;
    }
    printf ("Sum of %d Natural Numbers:%d",n,s);
    getch();
}