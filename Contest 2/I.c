
#include<stdio.h>
int main()
{
    int n,m,min;
    scanf("%d %d",&n,&m);
    int ar[n][m];
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            scanf("%d",&ar[i][j]);
        }
        min = ar[0];
        for(int j = 0;j < m;j++)
        {
            if(min > ar[i][j]);
            {
                min = ar[i][j];
            }
        }
    }
    printf("%d\n",min);
    getch ();
}
