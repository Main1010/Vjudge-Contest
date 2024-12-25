
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        int num,temp,rem,sum =0;
        scanf("%d",&num);
        temp = num;
        for(int j = 0;temp != 0;j++)
        {
            rem = temp % 10;
            sum = sum*10+rem;
            temp /= 10;
        }
        if(sum == num)
        {
            printf("Case %d: Yes\n",i+1);
        }
        else
        {
            printf("Case %d: No\n",i+1);
        }
    }
    return 0;
}

//121 = reverse then same as previous.
