#include<stdio.h>
int main()
{
int n,a[50],i,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    sum=sum+a[i];
}
printf("the avg is %d",sum/n);
return 0;
}
