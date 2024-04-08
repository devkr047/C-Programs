#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i;
    printf ("Enter a Number:");
    scanf ("%d",&n);
    printf ("\nFactors of %d are\n\n",n);
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            printf ("%d,",i);
        }
    }
    printf ("\b ");
    getch();
}