#include<conio.h>
#include<stdio.h>
void main()
{
    char ch;
    int a,b;
    printf ("Enter Your Choice (+,-,*,/,%%):");
    scanf ("%c",&ch);
    printf ("Enter First Number:");
    scanf ("%d",&a);
    printf ("Enter Second Number:");
    scanf ("%d",&b);
    switch (ch)
    {
        case '+':
        printf ("%d+%d=%d",a,b,(a+b));
        break;
        case '-':
        printf ("%d-%d=%d",a,b,(a-b));
        break;
        case '*':
        printf ("%d*%d=%d",a,b,(a*b));
        break;
        case '/':
        printf ("%d/%d=%d",a,b,(a/b));
        break;
        case '%':
        printf ("%d%%%d=%d",a,b,(a%b));
        break;
        default:
        printf ("Wrong Choice");
    }
    getch();
}