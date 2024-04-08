#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,c=0;
    printf ("Enter a Number:");
    scanf ("%d",&n);
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            printf ("%d is not a Prime Number",n);
            c++;
            break;
        }
    }
    if (c==0)
    {
        printf ("%d is a Prime Number",n);
    }
    getch();
}