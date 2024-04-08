#include<conio.h>
#include<stdio.h>
void main()
{
    int n1,n2,temp;
    printf ("Enter First Number:");
    scanf ("%d",&n1);
    printf ("Enter Second Number:");
    scanf ("%d",&n2);
    printf ("\nBefore Swapping\n\n");
    printf ("A:%d\tB:%d\n\n",n1,n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf ("After Swapping\n\n");
    printf ("A:%d\tB:%d",n1,n2);
    getch();
}