
#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d",&i);
    if(i >= 1 && i <= 9)
    {
        printf("%d\n",i);
    }
    else if(i >= 10 && i <= 99)
    {
        printf("9\n");
    }
    else if(i >= 100 && i <= 999)
    {
        i = (i - 100) + 1;
        j = i + 9;
        printf("%d\n",j);
    }
    else if(i >= 1000 && i <= 9999)
    {
        printf("909\n");
    }
    else if(i >= 10000 && i <= 99999)
    {
        i = (i - 10000) + 1;
        j = i + 909;
        printf("%d\n",j);
    }
    else if(i >= 100000 && i <= 999999)
    {
        printf("90909\n");
    }
    return 0;
}
