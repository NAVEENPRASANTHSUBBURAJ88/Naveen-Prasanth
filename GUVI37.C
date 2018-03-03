#include <stdio.h>
int main()
{
int m,n,t;
printf("Enter 2 numbers\n");
scanf("%d %d",&m,&n);
printf("Before Swapping %d %d\n",m,n);
t=m;
m=n;
n=t;
printf("After Swapping %d %d",m,n);
return 0;
}
