#include<conio.h>
#include<stdio.h>
void main()
{
    char s[20];
    long n;
    int d,i=0,j;
    printf ("Enter a Long Number:");
    scanf ("%ld",&n);
    while (n!=0)
    {
        d=n%10;
        s[i]='0'+d;
        i++;
        n=n/10;
    }
    printf ("\nLong Number as String Representation:");
    for (j=i;j>=0;j--)
    {
        printf ("%c",s[j]);
    }
    getch();
}