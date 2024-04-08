#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int l,c,i,j;
    printf ("Enter a String:");
    gets (s);
    l=strlen (s);
    printf ("\nRepeating Characters are:");
    for (i=0;i<l;i++)
    {
        if (s[i]==' ')
        {
            continue;
        }
        c=0;
        for (j=0;j<l;j++)
        {
            if (s[j]==' ')
            {
                continue;
            }
            if (i!=j)
            {
                if (s[i]==s[j])
                {
                    c++;
                }
            }
        }
        if (c==0)
        {
            printf ("%c,",s[i]);
        }
    }
    printf ("\b ");
    getch();
}