#include <stdio.h>
int main()
{
	int i,n,c=0,a=1;
	printf("enter the num:\n");
	scanf("%d",&n);
	while(n!=1)
	{
		n=n/2;
		c++;
	}
	for(i=0;i<=c;i++)
	{
		a=a*2;
	}
	printf("%d",a);
	return 0;
}
