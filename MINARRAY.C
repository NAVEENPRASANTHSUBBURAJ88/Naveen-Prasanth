
#include<stdio.h>
main()
{
int a[100000],i,n,min;
printf("Enter N value:");
scanf("%d",&n);
printf("\nEnter the array values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("The Minimum element is %d",min);
}
