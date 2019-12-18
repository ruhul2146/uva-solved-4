#include<stdio.h>
int main()
{
    int t,i,n,arr[3000],j,count1,count2,sum1,sum2;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        count1=0;
        count2=0;
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
            sum1=arr[j]/30;
            sum2=arr[j]/60;
            if((arr[j]%30)>=0)
            {
                count1=count1+(10*(sum1+1));
            }
            if((arr[j]%60)>=0)
            {
                count2=count2+(15*(sum2+1));
            }
        }
        if(count1<count2)
        {
            printf("Case %d: Mile %d\n",i+1,count1);
        }
        else if(count1==count2)
        {
            printf("Case %d: Mile Juice %d\n",i+1,count1);
        }
        else
        {
            printf("Case %d: Juice %d\n",i+1,count2);
        }
    }
    return 0;
}
