#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
    char first[10],last[10]; 
    printf ("Enter First Name:");
    scanf ("%s",&first);
    printf ("Enter Second Name:");
    scanf ("%s",&last);
    printf ("\nFull Name:%s",strcat (first,last));
    getch();
}