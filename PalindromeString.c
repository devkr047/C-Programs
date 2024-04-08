#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
    char s[100],temp[100];
    int l,i,j=0;
    printf ("Enter a String:");
    gets (s);
    l=strlen (s);
    for (i=(l-1);i>=0;i--)
    {
        temp[i]=s[j];
        j++;
    }
    if (strcmp (temp,s)==0)
    {
        printf ("\nPalindrome String");
    }
    else
    {
        printf ("\nNot a Palindrome String");
    }
    getch();
}