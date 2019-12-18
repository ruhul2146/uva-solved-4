#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,k,m,i;
    double tax;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld",&k);
        tax=0;
        if(k>180000)
        {
            m=k-180000;
            if(m>=300000)
            {
                tax=tax+(300000*0.1);
                m=m-300000;
                if(m>=400000)
                {
                    tax=tax+(400000*.15);
                    m=m-400000;
                    if(m>=300000)
                    {
                        tax=tax+(300000*.2);
                        m=m-300000;
                        if(m>0)
                        {
                            tax=tax+(m*.25);
                        }
                    }
                    else
                    {
                        tax=tax+(m*.2);
                    }
                }
                else
                {
                    tax=tax+(m*.15);
                }
            }
            else
            {
                tax=tax+(m*.1);
            }
        }
        if(tax<2000&&tax>0)
        {
            tax=2000;
        }
        printf("Case %lld: %f\n",i+1,tax);
    }
    return 0;
}
