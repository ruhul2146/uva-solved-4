#include<stdio.h>
int main()
{
   long long int s,d,i,j,sum;
    while(scanf("%lld%lld",&s,&d)!=EOF)
    {
        sum=0;
        for(i=s;i<=d;i++)
        {
            sum=sum+i;
            if(d<=sum)
            {
                printf("%lld\n",i);
                break;
            }
        }
    }
    return 0;
}
