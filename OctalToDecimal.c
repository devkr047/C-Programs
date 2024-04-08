#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long n;
    int result=0,i=0,d;
    printf ("Enter an Octal Number:");
    scanf ("%lld",&n);
    while (n!=0)
    {
        d=n%10;
        if (d>7)
        {
            printf ("\nInvalid Input!");
            getch();
            exit(1);
        }
        result=result+(d*pow(8,i));
        n=n/10;
        i++;
    }
    printf ("\nDecimal Equivalent:%d",result);
    getch();
}