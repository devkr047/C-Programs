#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf ("Enter Number of Rows:");
    scanf ("%d",&n);
    int a[n][n];
    printf ("\n");
    for (i=1;i<=n;i++)
    {
        for (k=i;k<n;k++)
        {
            printf (" ");
        }
        for (j=1;j<=i;j++)
        {
            if (j==1||j==i)
            {
                a[i][j]=1;
                printf ("%d ",a[i][j]);
            }
            else
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
                printf ("%d ",a[i][j]);
            }
        }
        printf ("\n");
    }
    getch();
}