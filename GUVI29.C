#include<stdio.h>
int main()
{
int t,h,m;
printf("Enter time in minutes\n");
scanf("%d",&t);
h=t/60;
m=t%60;
printf("%d:%d",h,m);
return 0;
}
