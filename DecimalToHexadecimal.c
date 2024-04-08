#include<conio.h>
#include<stdio.h>
void main()
{
    char result[100];
    int n,d,i=0,j;
    printf ("Enter Decimal Number:");
    scanf ("%d",&n);
    while (n!=0)
    {
        d=n%16;
        if (d>=0 && d<=9)
        {
            result[i]=d+'0';
        }
        else if (d>=10 && d<=15)
        {
            result[i]=(char)(d+55);
        }
        n=n/16;
        i++;
    }
    printf ("\nHexadecimal Equivalent:");
    for (j=i;j>=0;j--)
    {
        printf ("%c",result[j]);
    }
    getch();
}