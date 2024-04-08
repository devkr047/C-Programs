#include<conio.h>
#include<stdio.h>
void main()
{
    long long int first,second;
    int i=0,j,carry=0,sum[20];
    printf ("Enter First Binary Number:");
    scanf ("%lld",&first);
    printf ("Enter Second Binary Number:");
    scanf ("%lld",&second);
    while (first!=0 || second!=0)
    {
        sum[i]=((first%10)+(second%10)+carry)%2;
        carry=((first%10)+(second%10)+carry)/2;
        first=first/10;
        second=second/10;
        i++;
    }
    if (carry!=0)
    {
        sum[i]=carry;
    }
    else
    {
        i--;
    }
    printf ("\nSum:");
    for (j=i;j>=0;j--)
    printf ("%d",sum[j]);
    getch();
}