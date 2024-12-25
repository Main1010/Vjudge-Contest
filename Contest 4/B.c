
#include<stdio.h>
int main()
{
    int n,x,y,count1 = 0,count2 = 0;
    scanf("%d",&n);
    char ar[100];
    for(int i = 0;i < n;i++)
    {
        scanf("%c",&ar[i]);
    }
    for(int i = 0;i < n;i++)
    {
        if(ar[i] == ar[i+1])
        {
            count1++;
        }
    }
    printf("%d\n",count1);
    return 0;
}
