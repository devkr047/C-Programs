#include<conio.h>
#include<stdio.h>
void main()
{
    char result[100];
    int n,i=0,j,d;
    printf ("Enter a Decimal Number:");
    scanf ("%d",&n);
    while (n!=0)
    {
        d=n%2;
        result[i]=d+'0';
        n=n/2;
        i++;
    }
    printf ("\nBinary Equivalent:");
    for (j=i;j>=0;j--)
    {
        printf ("%c",result[j]);
    }
    getch();
}