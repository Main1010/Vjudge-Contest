
#include<stdio.h>
int main()
{
    int a,b,count = 0;
    scanf("%d %d",&a,&b);
    int i = 0;
    while(i < a || i < b)
    {
        count++;
        a *= 3;
        b *= 2;
        if(a > b)
        {
            break;
        }
        i++;
    }
    printf("%d\n",count);
    return 0;
}
