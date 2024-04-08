#include<conio.h>
#include<stdio.h>
struct distance
{
    int feet;
    float inches;
};
struct distance arr[100];
void main()
{
    float sum1=0.0;
    int i,n,sum=0,temp;
    printf ("Enter Number of Values you have:");
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        printf ("\nEnter Detail of %d Distance\n\n",(i+1));
        printf ("Enter Feet:");
        scanf ("%d",&arr[i].feet);
        printf ("Enter Inches:");
        scanf ("%f",&arr[i].inches);
        sum=sum+arr[i].feet;
        sum1=sum1+arr[i].inches;
    }
    temp=sum1/12;
    sum=sum+temp;
    sum1=sum1-(12*temp);
    printf ("\nTotal Distance:%d Feet %.2f Inches",sum,sum1);
    getch();
}