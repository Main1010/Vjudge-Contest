
#include <stdio.h>
#include<math.h>
int main()
{
    int n,a,b,x;
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        x = 0;
        scanf("%d %d",&a,&b);
        x = a - b;
        printf("%d\n",abs(x));
    }
    return 0;
}
