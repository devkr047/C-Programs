#include<conio.h>
#include<stdio.h>
int reverse (int *,int);
void main()
{
    int n,i,top,k;
    printf ("Enter Number of Terms:");
    scanf ("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter %d Element:",(i+1));
        scanf ("%d",&a[i]);
    }
    printf ("\nOriginal Stack\n\n");
    for (i=(n-1);i>=0;i--)
    {
        printf ("%d\n",a[i]);
    }
    k=reverse (a,top);
    printf ("\n\n%d",k);
    getch();
}
int reverse(int a[],int top)
{
    if (top==0)
    {
        return a[top];
    }
    else
    {
        printf ("%d",a[top]);
        return (reverse (a,--top));
        
    }
}