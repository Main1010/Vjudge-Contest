
#include<stdio.h>
int main()
{
    int n,sum = 0,count = 0;
    scanf("%d",&n);
    int ar[n];
    for(int i =0;i < n;i++)
    {
        scanf("%d",&ar[i]);
        if((ar[i]%6 == 0) && (ar[i]>0))
        {
            count++;
            sum += ar[i];
        }
    }
    printf("%d %d",count,sum);
    return 0;
}
