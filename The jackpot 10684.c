#include<stdio.h>
int main()
{
    long long int t,i,n,sum,j,max;
    for(j=0; j>=0; j++)
    {
        scanf("%lld",&t);
        sum=0;
        max=-100000000;
        if(t==0)
        {
            break;
        }
        else
        {
            for(i=0; i<t; i++)
            {
                scanf("%lld",&n);
                sum=sum+n;
                if(sum<0)
                {
                    sum=0;
                }
                if(max<sum)
                {
                    max=sum;
                }
            }
            if(max<=0)
            {
                printf("Losing streak.\n");
            }
            else
            {
                printf("The maximum winning streak is %lld.\n",max);
            }
        }
    }
    return 0;
}
