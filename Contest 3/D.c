
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        int ar[n];
        int m,j,count1 = 0,count2 = 0;
        scanf("%d",&m);
        for(j = 1;j <= m;j++)
        {
            scanf("%d",&ar[j]);
        }
        for(j = 1;j <= m-1;j++)
        {
            if(ar[j]==ar[j+1])
            {
                continue;
            }
            if(ar[j]<ar[j+1])
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        printf("Case %d: %d %d\n",i+1,count1,count2);
    }
    return 0;
}
