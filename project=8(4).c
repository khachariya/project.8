#include<stdio.h>

main()
{
	int ch[100];
	int *p;

	int i,n;
    printf("enter string = ");
    gets(ch);
    
    p=&ch;
    
    printf(" string lenths = %d",strlen(p));
    
	
	
}
