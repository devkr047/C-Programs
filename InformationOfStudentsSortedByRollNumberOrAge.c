#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct students
{
    char name[100];
    int roll;
    int age;
    double total_marks;
};
struct students details[100];
void main()
{
    char temp[100];
    int n,i,j,temp1,temp2,choice;
    double temp3;
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
    while (1)
    {
        printf ("\nHow you Want to view your data\n\n");
        printf ("1-Sorted by Roll Number.");
        printf ("\n2-Sorted by Age.");
        printf ("\n3-Exit.");
        printf ("\n\nSelect Your Choice:");
        scanf ("%d",&choice);
        switch (choice)
        {
            case 1:
            {
                for (i=0;i<n;i++)
                {
                    for (j=0;j<n;j++)
                    if (i!=j)
                    {
                        if (details[i].roll < details[j].roll)
                        {
                            strcpy (temp,details[i].name);
                            strcpy (details[i].name,details[j].name);
                            strcpy (details[j].name,temp);

                            temp1=details[i].roll;
                            details[i].roll=details[j].roll;
                            details[j].roll=temp1;

                            temp2=details[i].age;
                            details[i].age=details[j].age;
                            details[j].age=temp2;

                            temp3=details[i].total_marks;
                            details[i].total_marks=details[j].total_marks;
                            details[j].total_marks=temp3;
                        }
                    }
                }
                printf ("\nRoll No\t\tName\t\t\tAge\t\tTotal Marks\n\n");
                for (i=0;i<n;i++)
                {
                    printf ("%d\t\t%s\t\t%d\t\t%.2lf\n",details[i].roll,details[i].name,details[i].age,details[i].total_marks);
                }
                break;
            }
            case 2:
            {
                for (i=0;i<n;i++)
                {
                    for (j=0;j<n;j++)
                    if (i!=j)
                    {
                        if (details[i].age < details[j].age)
                        {
                            strcpy (temp,details[i].name);
                            strcpy (details[i].name,details[j].name);
                            strcpy (details[j].name,temp);

                            temp1=details[i].roll;
                            details[i].roll=details[j].roll;
                            details[j].roll=temp1;

                            temp2=details[i].age;
                            details[i].age=details[j].age;
                            details[j].age=temp2;

                            temp3=details[i].total_marks;
                            details[i].total_marks=details[j].total_marks;
                            details[j].total_marks=temp3;
                        }
                    }
                }
                printf ("\nRoll No\t\tName\t\t\tAge\t\tTotal Marks\n\n");
                for (i=0;i<n;i++)
                {
                    printf ("%d\t\t%s\t\t%d\t\t%.2lf\n",details[i].roll,details[i].name,details[i].age,details[i].total_marks);
                }
                break;
            }
            case 3:
            {
                getch();
                exit(1);
            }
            default:
            {
                printf ("\nInvalid Choice!");
                break;
            }
        }
    }
    getch();
}