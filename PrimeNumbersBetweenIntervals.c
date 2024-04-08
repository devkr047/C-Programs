#include<conio.h>
#include<stdio.h>
void prime (int l,int u)
{
    int i,j,c,t=0;
    for (i=l;i<=u;i++)
    {
        c=0;
        for (j=2;j<i;j++)
        {
            if (i%j==0)
            {
                c++;
            }
        }
        if (c==0)
        {
            t++;
            printf ("%d,",i);
        }
    }
    if (t==0)
    {
        printf ("No Prime Numbers between %d and %d",l,u);
    }
    else
    {
        printf ("\b ");
    }
}
void main()
{
    int l,u;
    printf ("Enter Limit\n\n");
    printf ("Enter Lower Limit:");
    scanf ("%d",&l);
    printf ("Enter Upper Limit:");
    scanf ("%d",&u);
    printf ("\nPrime Numbers Between %d and %d are\n\n",l,u);
    prime (l,u);
    getch();
}