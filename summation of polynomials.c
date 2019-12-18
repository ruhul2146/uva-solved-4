#include<stdio.h>
int main()
{
   long long int x,sum,sum2;
    while(scanf("%lld",&x)!=EOF)
    {
        sum=(x*(x+1))/2;
        sum2=sum*sum;
        printf("%lld\n",sum2);
    }
    return 0;
}
