#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int *createInteger (void);
void main()
{
    int *ptr;
    ptr=createInteger ();
    printf ("\nValue of integer:%d\n",*ptr);
	printf ("Address of Integer:%u",&ptr);
    free(ptr);
	getch();
}
int *createInteger ()
{
    int *ptr=(int*)malloc(sizeof(int));
    if (ptr==NULL)
	{
        printf ("Memory allocation failed\n");
        exit(1);
    }
	printf ("Enter a Number:");
	scanf ("%d",*(&ptr));
    return ptr;
}