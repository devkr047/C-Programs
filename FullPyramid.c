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
        for (k=1;k<=(2*n)-(2*i);k++)
        {
            printf (" ");
        }
        for (j=1;j<=(2*i)-1;j++)
        {    
            printf ("%d ",i);
        }
        printf ("\n");
    }
    getch();
}