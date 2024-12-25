
#include<stdio.h>
int main()
{
    int N,i,j=0,k=0;
    scanf("%d",&N);
    int ar[N];
    for(i = 0;i<N;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i = 0;i < N;i++)
    {
        if(ar[i] == i+1)
        {
            j++;
        }
        else if(ar[i] != i+1)
        {
            k++;
        }
    }
    if(j == N)
    {
        printf("YES\n");
    }
    else if(k == 2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

