#include<stdio.h>
int main()
{
    int n,i,h1,m1,h2,m2,h3,m3,h4,m4,sum1,sum2,sum3,sum4,j,k,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d:%d %d:%d %d:%d %d:%d",&h1,&m1,&h2,&m2,&h3,&m3,&h4,&m4);
        sum1=h1*60+m1;
        sum2=h2*60+m2;
        sum3=h3*60+m3;
        sum4=h4*60+m4;
        c=1;
        for(j=sum1;;j++)
        {
            if(j>sum2)
            {
                break;
            }
            if(j==1440)
            {
                j=0;
            }
            for(k=sum3;;k++)
            {
                if(k>sum4)
                {
                    break;
                }
                if(k==1440)
                {
                    k=0;
                }
                if(j==k)
                {
                    c=0;
                    printf("Case %d: Mrs Meeting\n",i+1);
                    break;
                }
            }
            if(c==0)
            {
                break;
            }
        }
        if(c!=0)
        {
            printf("Case %d: Hits Meeting\n",i+1);
        }
    }
    return 0;
}
