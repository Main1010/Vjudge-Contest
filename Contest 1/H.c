
#include<stdio.h>
int main()
{
    long long int i,j,k=0;
    scanf("%lld",&i);
    do
    {
        j = i%10;
        if(j == 4 || j == 7)
        {
            k++;
        }
        i = i/10;
    }
    while(i != 0);
    if(k == 4 || k == 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
