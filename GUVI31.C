#include<stdio.h>
void main()
{
    char a[100];
    int i,num=0;
    printf("Enter the string\n");
    scanf("%[^\n]",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            num++;
        }
    }
    printf("Number of characters is %d",num);
}
