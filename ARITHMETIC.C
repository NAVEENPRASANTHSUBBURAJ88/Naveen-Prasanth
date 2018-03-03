#include<stdio.h>
int main()
{
    int F,D,N,sum=0,i;
    printf("Enter number of Terms\n");
    scanf("%d",&N);
    printf("\nEnter first number and difference\n");
    scanf("%d %d",&F,&D);
    for(i=0;i<N;i++)
    {
        sum += F;
        F += D;
    }
    printf("\nArithmetic Progression of %d is %d",N,sum);
    return 0;
}
