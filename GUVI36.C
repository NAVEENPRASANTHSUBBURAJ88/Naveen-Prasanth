#include<stdio.h>
int main()
{
char a[50];
int i,count=0;
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='a'&&a[i]<='z'||a[i]>='0'&&a[i]<='9'||a[i]>='A'&&a[i]<='Z'||a[i]=='.')
{
}
else
count++;
}
printf("%d",count);
return 0;
}
