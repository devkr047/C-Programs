#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i,j,num=65;
    printf ("Enter Number of Rows:");
    scanf ("%d",&n);
    printf ("\n");
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf ("%c ",(char)num);
            num++;
        }
        printf ("\n");
    }
    getch();
}