#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j,num;
    printf ("Enter Number of Rows:");
    scanf ("%d",&n);
    num=(n*(n+1))/2;
    printf ("\n");
    for (i=1;i<=n;i++)
    {
        for (j=n;j>=i;j--)
        {
            printf ("%d ",num);
            num--;
        }
        printf ("\n");
    }
    getch();
}