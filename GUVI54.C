#include <stdio.h>
int main() 
{
	int n;
	printf("enter the no:\n");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("the nearest even no is %d",n);
		
	}
	else
	{
		printf("the nearest even no is %d",(n-1));
	}
	return 0;
}
