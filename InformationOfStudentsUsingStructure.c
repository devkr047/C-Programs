#include<conio.h>
#include<stdio.h>
#include<string.h>
struct students
{
    char name[100];
    int roll;
    int age;
    double total_marks;
}details[100];
void main()
{
    int i,n;
    printf ("\nEnter Number of Students:");
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        printf ("\nEnter Details of %d Student\n\n",(i+1));
        printf ("Enter Roll Number:");
        scanf ("%d",&details[i].roll);
        gets (details[-1].name);
        printf ("Enter Name:");
        gets (details[i].name);
        printf ("Enter Age:");
        scanf ("%d",&details[i].age);
        printf ("Enter Total Marks:");
        scanf ("%lf",&details[i].total_marks);
    }
    printf ("\nRoll No\t\tName\t\t\tAge\t\tTotal Marks\n\n");
    for (i=0;i<n;i++)
    {
        printf ("%d\t\t%s\t\t%d\t\t%.2lf\n",details[i].roll,details[i].name,details[i].age,details[i].total_marks);
    }
    getch();
}