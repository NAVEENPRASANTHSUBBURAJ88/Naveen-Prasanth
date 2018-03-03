#include<stdio.h>
void main()
{
    char a[100];
    int i,num=1;
    printf("Enter the string\n");
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            num++;
        }
    }
    printf("Number of words is %d",num);
}
