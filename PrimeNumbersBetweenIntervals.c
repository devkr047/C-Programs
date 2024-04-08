#include<conio.h>
#include<stdio.h>
void main()
{
    int n1,n2,i,j,c,c1=0;
    printf ("Enter Intervals\n\n");
    printf ("Enter Lower Limit:");
    scanf ("%d",&n1);
    printf ("Enter Upper Limit:");
    scanf ("%d",&n2);
    printf ("\nPrime Numbers Between %d and %d are\n\n",n1,n2);
    for (i=n1;i<=n2;i++)
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
            c1++;
        }
    }
    if (c1==0)
    {
        printf ("No Prime Numbers Between %d and %d",n1,n2);
    }
    else
    {
        printf ("\b ");
    }
    getch();
}