#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j,num=1;
    printf ("Enter Number of Rows:");
    scanf ("%d",&n);
    printf ("\n");
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf ("%d ",num);
            num++;
        }
        printf ("\n");
    }
    getch();
}