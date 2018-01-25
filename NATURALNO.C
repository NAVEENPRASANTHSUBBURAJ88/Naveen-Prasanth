#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("Enter the number\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
sum += i;
}
printf("\n sum=%d",sum);
getch();
 }
