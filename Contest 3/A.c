
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        int n = 3,min = 0,max = 0,second = 0;
        int ar[n];
        for(int i=0;i < n;i++)
        {
            scanf("%d",&ar[i]);
        }
        min = ar[0];
        for(int j = 0;j < n;j++)
        {
            if(ar[j] < min)
            {
                min = ar[j];
            }
        }
        max = ar[0];
        for(int k = 0;k < n;k++)
        {
            if(ar[k] > max)
            {
                max = ar[k];
            }
        }
        for(int l=0;l < n;l++)
        {
            if((ar[l] > min) && (ar[l] < max))
            {
                second = ar[l];
            }
        }
        printf("Case %d: %d\n",i+1,second);
    }
    return 0;
}
