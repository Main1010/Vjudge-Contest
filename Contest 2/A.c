
#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,count = 0,mul = 1;
    double x;
    scanf("%lld",&n);
    long long int ar[n];
    for(long long int i = 0;i < n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    for(long long int i = 0;i < n;i++)
    {
        mul = ar[i]*ar[i];
        if(ar[i] == 0)
        {
            count++;
        }
        if
    }
    if(x <= mul)
    {
        printf("-1\n");
    }
    else if(count > 0)
    {
        printf("0\n");
    }
    else if(x > mul)
    {
        printf("%lld\n",mul);
    }
    return 0;
}
