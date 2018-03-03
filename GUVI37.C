#include <stdio.h>
int main()
{
int a,b,t;
printf("Enter 2 numbers\n");
scanf("%d %d",&a,&b);
printf("Before Swapping %d %d\n",a,b);
t=a;
a=b;
b=t;
printf("After Swapping %d %d",a,b);
return 0;
}
