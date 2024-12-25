
#include<stdio.h>
int main()
{
    int n,l = 0,sum = 0,count = 0,avr = 0;
    scanf("%d",&n);
    while(l < n)
    {
        int m;
        scanf("%d",&m);
        if(m == 0)
        {
            return 0;
        }
        int ar[m];
        for(int i = 0;i < m;i++)
        {
            scanf("%d",&ar[i]);
        }
        for(int i=0;i < m;i++)
        {
            sum += ar[i];
            avr = sum / m;
        }
        for(int i = 0;i < m;i++)
        {
            if(ar[i] == avr)
            {
                count++;
            }
        }
        printf("Set #%d\n",l+1);
        printf("The minimum number of moves is %d\n",m-count);
        l++;
    }
    return 0;
}
