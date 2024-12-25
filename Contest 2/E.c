
#include<stdio.h>
int main()
{
    int n,m,sum = 0;
    scanf("%d",&n);
    for(int i =0;i < n;i++)
    {
        scanf("%d",&m);
        int ar[m];
        for(int j =0;j < m;j++)
        {
            scanf("%d",&ar[j]);
        }
        for(int j =0;j < m;j++)
        {
            sum += ar[j];
        }
        if(sum%2 == 0)
        {
            printf("No");
        }
        else
        {
            printf("Yes");
        }
    }
    return 0;
}
