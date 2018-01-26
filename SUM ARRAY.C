#include<stdio.h>
#include<conio.h>
void main()
{
int A[20];
int i,n,k,sum=0;
clrscr();
printf("Enter size of array");
scanf("%d",&n);
printf("Enter k values to sum");
scanf("%d",&k);
printf("Enter elements of array",n);
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
for(i=0;i<k;i++)
{
sum=sum+A[i];
}
printf("Sum of k values are %d",sum);
getch();
}

