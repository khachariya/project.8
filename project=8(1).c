#include<stdio.h>

swap(int *n1,int *n2)
{
	int *temp;
	temp = *n1;
	*n1 = *n2;
	*n2 =temp;
	
	printf("enter swaping value A = %d\n",*n1);
	printf("enter swaping value B = %d\n",*n2); 
}

main()
{
    int a,b;
	a=65;
	b=85;
	swap(&a,&b); 	
}
