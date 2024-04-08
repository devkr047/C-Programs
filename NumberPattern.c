#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j,k,num;
    printf ("Enter Number of Rows:");
    scanf ("%d",&n);
    printf ("\n");
    for (i=1;i<=n;i++)
    {
        num=i;
        for (k=i;k<n;k++)
        {
            printf (" ");
        }
        for (j=1;j<=i;j++)
        {
            printf ("%d",num);
            num++;
        }
        num--;
        for (j=1;j<i;j++)
        {
            printf ("%d",--num);
        }
        printf ("\n");
    }
    getch();
}