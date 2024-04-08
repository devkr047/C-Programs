#include<conio.h>
#include<stdio.h>
void main()
{
    int n,i=0,j,result[100];
    printf ("Enter a Decimal Number:");
    scanf ("%d",&n);
    while (n!=0)
    {
        result[i]=n%8;
        n=n/8;
        i++;
    }
    printf ("\nOctal Equivalent:");
    for (j=(i-1);j>=0;j--)
    {
        printf ("%d",result[j]);
    }
    getch();
}