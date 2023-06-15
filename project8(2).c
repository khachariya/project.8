#include<stdio.h>

main()
{
	int a[100];
	int i,n;
	int *p[100];

    printf("enter value of arry = ");
    scanf("%d",&n);
    
    printf("enter elements in arry = ");
     
     for(i=0;i<n;i++)
     {
     	scanf("%d", &a[i]);
	 }
	 for(i=0;i<n;i++)
	 {
	 	p[i]=&a[i];
	 	printf("enter value of arry = %d\n",*p[i]);
	 }
	
	
}
