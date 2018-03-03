#include<stdio.h>
#include<string.h>
void main()
{
    int i,n,c=0;
    char a[100];
    printf("Enter the string:");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if((a[i]=='0')||(a[i]=='1'))
        {
            c+=1;
        }
    }
    if(c==n)
    {
        printf("The given string is in binary representation");
    }
    else
    {
        printf("The given string is not in binary representation");
    }
}
