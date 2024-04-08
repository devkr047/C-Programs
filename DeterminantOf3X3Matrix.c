#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,a[3][3],det=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("Enter A[%d][%d] Element:",(i+1),(j+1));
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("\nMatrix\n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("%d\t",a[i][j]);
        }
        printf ("\n");
    }
    for (i=0;i<3;i++)
    {
        det=det+(a[0][i]*((a[1][(i+1)%3]*a[2][(i+2)%3])-(a[1][(i+2)%3]*a[2][(i+1)%3])));
    }
    printf ("\nDeterminant:%d",det);
    getch();
}