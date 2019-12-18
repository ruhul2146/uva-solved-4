#include<stdio.h>
int main()
{
    long long int s,t,i,sum,res;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&s);
        sum=(s*(s+1))/2;
        res=sum-(s/2);
        printf("%lld\n",res);
    }
    return 0;
}
