
#include<stdio.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    int ar[n];
    for(i = 0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i = 1;i < n-1;i++)
    {
        if(ar[i-1] < ar[i] && ar[i] < ar[i+1])
        {
            j++;
        }
        else if(ar[i-1] > ar[i] && ar[i] > ar[i+1])
        {
            j++;
        }
    }
    printf("%d\n",j);
    return 0;
}
