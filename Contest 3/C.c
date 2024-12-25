

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    printf("Lumberjacks:\n");
    for(int i = 0;i < n;i++)
    {
        int j,count1 = 0,count2 = 0;
        for(j = 1;j <= 10;j++)
        {
            scanf("%d",&ar[j]);
        }
        for(j = 1;j <= 9;j++)
        {
            if(ar[j] < ar[j+1])
            {
                count1++;
            }
        }
        for(j = 1;j <= 9;j++)
        {
            if(ar[j] > ar[j+1])
            {
                count2++;
            }
        }
        if((count1 == 9 && count2 == 0) || (count1 == 0 && count2 == 9))
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }
    }
    return 0;
}
