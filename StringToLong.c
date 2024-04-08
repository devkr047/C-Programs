#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
    char c[20];
    long result=0;
    int i=0,n=0;
    printf ("Enter a String Representing a Long Integer:");
    scanf ("%s",c);
    if (c[0]=='-')
    {
        n=1;
        i=1;
    }
    while (c[i]!='\0')
    {
        if (c[i]>='0' && c[i]<='9')
        {
            result=(result*10)+(c[i]-'0');
        }
        else
        {
            printf("\nInvalid Input!");
            exit(1);
        }
        i++;
    }
    if (n)
    {
        result=-result;
    }
    printf("\nConverted Long Integer:%ld",result);
    getch();
}