#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    long n;
    int result,i=0,d;
    printf ("Enter Decimal Number:");
    scanf ("%ld",&n);
    while (n!=0)
    {
        d=n%10;
        if (d==0 || d==1)
        {
            result=result+(d*(pow(2,i)));
        }
        else
        {
            printf ("\nInvalid Input!");
            getch();
            exit(1);
        }
        n=n/10;
        i++;
    }
    printf ("\nDecimal Equivalent:%d",result);
    getch();
}