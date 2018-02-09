#include<stdio.h>
main()
{
int a[100000],i,n,max;
printf("Enter N value:");
scanf("%d",&n);
printf("\nEnter the array values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("The Maximum element is %d",max);
}
