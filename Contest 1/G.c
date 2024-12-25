
#include<stdio.h>
int main()
{
    int n,i,mx = 0,m = 0;
    scanf("%d",&n);
    int ar[n];
    for(i =0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i = 0;i < n;i++)
    {
        if(ar[i] > mx)
        {
            mx = ar[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(ar[i] == mx)
        {
            m++;
        }
    }
    printf("%d\n",m);
    return 0;
}
