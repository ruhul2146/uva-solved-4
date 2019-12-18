#include<stdio.h>
int main()
{
    int t,i,n,m,min;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&n,&m);
        min=(n/3)*(m/3);
        printf("%d\n",min);
    }
    return 0;
}
