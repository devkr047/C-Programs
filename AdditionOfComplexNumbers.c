#include<conio.h>
#include<stdio.h>
void main()
{
    int real_n1,img_n1,real_n2,img_n2;
    printf ("Enter Details of First Number\n\n");
    printf ("Enter Real Coefficient:");
    scanf ("%d",&real_n1);
    printf ("Enter Imaginary Coefficient:");
    scanf ("%d",&img_n1);
    printf ("\nEnter Details of Second Number\n\n");
    printf ("Enter Real Coefficient:");
    scanf ("%d",&real_n2);
    printf ("Enter Imaginary Coefficient:");
    scanf ("%d",&img_n2);
    printf ("\nFirst Number:%d+%di",real_n1,img_n1);
    printf ("\nSecond Number:%d+%di",real_n2,img_n2);
    printf ("\n\nSum of Numbers:%d+%di",(real_n1+real_n2),(img_n1+img_n2));
    getch();
}
