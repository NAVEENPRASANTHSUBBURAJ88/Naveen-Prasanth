#include<stdio.h>
int main()
{
int b[10],max,i;
printf("\nEnter the numbers\n");
for(i=0;i<10;i++)
{
scanf("%d",&b[i]);
}
max=b[0];
for(i=0;i<10;i++)
{
if(b[i]>max)
{
max=b[i];
}
}
printf("\nMaximum number is %d",max);
return 0;
}
