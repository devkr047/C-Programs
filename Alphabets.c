#include<conio.h>
#include<stdio.h>
void main()
{
    char i;
    int c=0;
    printf ("\nAlphabets\n\n");
    for (i='A';i<'Z';i++)
    {
        printf ("%c\t",i);
        c++;
        if (c==5)
        {
            printf ("\n");
            c=0;
        }
    }
    printf ("\t\tZ");
    getch();
}