#include<conio.h>
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a Boolean Value (0 or 1):");
    scanf("%d",&n);
    if (n==0)
    {
        printf ("\nString Representation:false");
    }
    else if (n==1)
    {
        printf ("\nString Representation:true");
    }
    else
    {
        printf ("\nInvalid Input!");
    }
    getch();
}