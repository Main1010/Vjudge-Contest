
#include<stdio.h>
int main()
{
    int n,sum = 0;
    scanf("%d",&n);
    int ar[n];
    for(int i =0;i < n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int max = ar[0];
    for(int i = 0;i < n;i++)
    {
        if(max < ar[i])
        {
            max = ar[i];
        }
    }
    for(int i = 0;i < n;i++)
    {
        sum = sum + ar[i];
    }
    if(max < sum-max)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
