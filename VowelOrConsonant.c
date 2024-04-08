#include<conio.h>
#include<stdio.h>
void main()
{
    char ch;
    printf ("Enter a Character:");
    scanf ("%c",&ch);
    if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf ("Character is Vowel");
    }
    else
    {
        printf ("Character is Consonant");
    }
    getch();
}