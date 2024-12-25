
#include<stdio.h>
int main()
{
    int N,K,M,i,sum = 0;
    scanf("%d %d %d",&N,&K,&M);
    int ar[N-1];
    for(i=0;i < N-1;i++)
    {
        scanf("%d",&ar[i]);
        sum += ar[i];
    }
    if((sum/N) >= M)
    {
        printf("0\n");
    }
    else if(((sum+K)/N)< M)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n",((N*M)-sum));
    }
    return 0;
}
