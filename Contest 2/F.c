
#include<stdio.h>
int main()
{
    int N,X,Y,Z,sum = 0,count = 0;
    scanf("%d %d",&N,&X);
    int ar[N];
    for(int i = 0;i<N;i++)
    {
        scanf("%d",&ar[i]);
        sum += ar[i];
        if(i < N)
        {
            count++;
        }
    }
    int min = ar[0];
    for(int i = 0;i<N;i++)
    {
        if(min > ar[i])
        {
            min = ar[i];
        }
    }
    Y = X-sum;
    Z = Y/min + count;
    printf("%d\n",Z);
    return 0;
}
