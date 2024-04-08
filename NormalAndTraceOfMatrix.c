#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
    int r,c,i,j,normal,s=0,s1=0;
    printf ("Enter Number of Rows:");
    scanf ("%d",&r);
    printf ("Enter Number of Columns:");
    scanf ("%d",&c);
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
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            s=s+(a[i][j]*a[i][j]);
        }
    }
    normal=sqrt(s);
    printf ("\nNormal of Matrix:%d",normal);
    if (r==c)
    {
        for (i=0;i<r;i++)
        {
            for (j=0;j<c;j++)
            {
                if (i==j)
                {
                    s1=s1+a[i][j];
                }
            }
        }
        printf ("\nTrace of Matrix:%d",s1);
    }
    else
    {
        printf ("\nIt is not Square Matrix. Trace of Matrix is not Possible.");
    }
    getch();
}