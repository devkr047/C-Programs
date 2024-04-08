#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    char n[100];
    int i,j=0,l,d,result=0;
    printf ("Enter Hexadecimal Number:");
    scanf ("%s",&n);
    l=strlen(n);
    for (i=(l-1);i>=0;i--)
    {
        if (n[i]>='0' && n[i]<='9')
        {
            d=n[i]-'0';
        }
        else if (n[i]>='A' && n[i]<='F')
        {
            d=n[i]-'A'+10;
        }
        else
        {
            printf ("\nInvalid Input!");
            getch();
            exit(1);
        }
        result=result+(d*(pow(16,j)));
        j++;
    }
    printf ("\nDecimal Equivalent:%d",result);
    getch();
}