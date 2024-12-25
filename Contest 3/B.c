#include<stdio.h>
int main()
{
    int n,l = 0;
    scanf("%d",&n);
    while(n--)
    {
        int m,i,mx=0;
        scanf("%d",&n);
        int ar[m];
        for(i=0;i<m;i++) scanf("%d",&ar[i]);

        for(i=0;i<m;i++)
            if(ar[i]>mx) mx=ar[i];
        l++;
        printf("Case %d: %d\n",l,mx);
    }

    return 0;
}

