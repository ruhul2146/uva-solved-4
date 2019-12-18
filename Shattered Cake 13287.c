#include<stdio.h>
int main()
{
   long long int w,n,a,b,sum,l,i;
    while(scanf("%lld%lld",&w,&n)!=EOF)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld%lld",&a,&b);
            sum=sum+(a*b);
        }
        l=sum/w;
        printf("%lld\n",l);
    }
    return 0;
}
