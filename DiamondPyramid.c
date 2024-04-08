#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf ("Enter Number of Rows:");
    scanf ("%d",&n);
    printf ("\n");
    for (i=1;i<=n;i++)
    {
        for (k=i;k<n;k++)
        {
            printf (" ");
        }
        for (j=1;j<=i;j++)
        {
            printf ("* ");
        }
        printf ("\n");
    }
    for (i=1;i<n;i++)
    {
        for (k=1;k<=i;k++)
        {
            printf (" ");
        }
        for (j=n-1;j>=i;j--)
        {
            printf ("* ");
        }
        printf ("\n");
    }
    getch();
}