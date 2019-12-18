#include<stdio.h>
int main()
{
    long long int a,l,i,sum,count;
    for(i=0; i>=0; i++)
    {
        scanf("%lld%lld",&a,&l);
        if(a<0&&l<0)
        {
            break;
        }
        else
        {
            count=1;
            sum=a;
            while(sum!=1)
            {
                if(sum%2==0)
                {
                    sum=sum/2;
                }
                else
                {
                    sum=3*sum+1;
                }
                if(sum>l)
                {
                    break;
                }
                count++;
            }
            printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i+1,a,l,count);
        }
    }
    return 0;
}
