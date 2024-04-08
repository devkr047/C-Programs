#include<conio.h>
#include<stdio.h>
#include<string.h>
struct Details
{
    char name[100];
    int Roll;
    int Age;
};
struct Details Students[100];
void main()
{
    FILE *p;
    p=fopen ("Students.dat","wb+");
    int choice,i=0,r,j;
    while (1)
    {
        printf ("1-Enter Data.\n");
        printf ("2-Extract Data.\n");
        printf ("3-Exit\n");
        printf ("\nSelect your choice:");
        scanf ("%d",&choice);
        switch (choice)
        {
            case 1:
            {
                printf ("Enter Details\n\n");
                printf ("Enter Name:");
                gets (Students[-1].name);
                gets (Students[i].name);
                printf ("Enter Roll Number:");
                scanf ("%d",&Students[i].Roll);
                printf ("Enter Age:");
                scanf ("%d",&Students[i].Age);
                struct Details input={Students[i].name,Students[i].Roll,Students[i].Age};
                
                i++;
                break;
            }
            case 2:
            {
                printf ("Enter Roll Number of Student you want to find:");
                scanf ("%d",&r);
                for (j=i;j>=0;j--)
                {
                    if (Students[j].Roll==r)
                    {

                    }
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
                printf ("Invalid Choice!");
                break;
            }
        }
    }
    getch();
}