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
        for (k=1;k<i;k++)
        {
            printf (" ");
        }
        for (j=n;j>=i;j--)
        {
            if (i==1||j==n||i==n||j==i)
            {
                printf ("* ");
            }
            else
            {
                printf ("  ");
            }
        }
        printf ("\n");
    }
    getch();
}