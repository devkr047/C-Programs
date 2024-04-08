#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j;
    printf ("Enter Number of Rows:");
    scanf ("%d",&n);
    printf ("\n");
    for (i=n;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf ("%d ",i);
        }
        printf ("\n");
    }
    getch();
}