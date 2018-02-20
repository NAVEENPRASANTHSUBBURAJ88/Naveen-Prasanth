#include<stdio.h>
int main()
{
    char a[100];
    int i,m=0,n=0;
    printf("enter a string\n");
    for(i=0;i<100;i++)
    {
        scanf("%[^\n]s",&a[i]);
    }
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='a')&&(a[i]<='z'))
        m=1;
        else if((a[i]>='0')&&(a[i]<='9'))
        n=1;
    }
    if((m==1)&&(n==1))
    printf("yes both are present");
    else
    printf("No");
        
}
