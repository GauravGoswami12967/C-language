#include<stdio.h>
int main()
{
	
	int a=562,b=932,c=732;
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%i",a);
		}
		else
		{
			printf("%i",c);
		}
		
	}	
	else if(b>c)
	{	
		printf("%i",b);
	}
	
	else
	{
			printf("%i",c);
	}
	
	
	return 0;
}