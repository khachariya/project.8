#include<stdio.h>  

  
main()  
{  
    int a[100],i,*p,n;  
    
    printf("enter integer numbers=");  
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]); 
	}  
    p = &a[n-1];  
  
    printf("elements of array in reverse order =%d\n");  
    for(i=0;i<n;i++)
	{
		printf("%d\n",*p--); 
	} 
}
     
  
    
