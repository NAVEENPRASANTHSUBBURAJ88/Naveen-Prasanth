#include<stdio.h>
void main()
{
int h1,m1,h2,m2,h,m;
printf("Enter time in hours and minutes\n");
scanf("%d %d \n %d %d",&h1,&m1,&h2,&m2);
h=h1-h2;
m=m1-m2;
printf("%d %d",h,m);
}
