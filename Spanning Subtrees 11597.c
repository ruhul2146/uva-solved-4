#include<stdio.h>
int main()
{
    int n,i,sum;
    for(i=0;i>=0;i++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        sum=n/2;
        printf("Case %d: %d\n",i+1,sum);
    }
    return 0;
}
