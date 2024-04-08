#include<conio.h>
#include<stdio.h>
void main()
{
    int r,c,i,j,k,n,temp,temp1;
    printf ("Enter Number of Rows:");
    scanf ("%d",&r);
    printf ("Enter Number of Columns:");
    scanf ("%d",&c);
    printf ("Enter Number of Times you want to Rotate Matrix:");
    scanf ("%d",&n);
    int a[r][c];
    printf ("\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf ("Enter A[%d][%d] Element:",(i+1),(j+1));
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("\nMatrix\n\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf ("%d\t",a[i][j]);
        }
        printf ("\n");
    }
    for (k=0;k<n;k++)
    {
        temp=a[r-1][0],temp1=a[0][c-1];
        for (i=(r-1);i>0;i--)
        {
            a[i][0]=a[i-1][0];
            a[(r-1)-i][c-1]=a[(r-1)-(i-1)][c-1];
        }
        for (j=(c-1);j>0;j--)
        {
            a[0][(c-1)-j]=a[0][(c-1)-(j-1)];
            a[r-1][j]=a[r-1][j-1];
        }
        a[r-1][1]=temp;
        a[0][c-2]=temp1;
    }
    printf ("\nRotated Matrix\n\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf ("%d\t",a[i][j]);
        }
        printf ("\n");
    }
    getch();
}