#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j,c;
    printf ("Enter Number of Terms:");
    scanf ("%d",&n);
    printf ("\nPrime Numbers from 1 to %d are\n\n",n);
    for (i=1;i<=n;i++)
    {
        c=0;
        for (j=1;j<=i;j++)
        {
            if (i%j==0)
            {
                c++;
            }
        }
        if (c==2)
        {
            printf ("%d,",i);
        }
    }
    printf ("\b ");
    getch();
}