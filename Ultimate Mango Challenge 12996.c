#include<stdio.h>
int main()
{
    int t,l,n,i,count,j,sum;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d",&n,&l);
        int arr[n+4],brr[n+4];
        for(j=0; j<n; j++)
        {
            scanf("%d",&arr[j]);
        }
        for(j=0; j<n; j++)
        {
            scanf("%d",&brr[j]);
        }
        sum=0;
        count=1;
        for(j=0; j<n; j++)
        {
            if(brr[j]>=arr[j])
            {
                sum=sum+arr[j];
            }
            else
            {
                count=0;
                printf("Case %d: No\n",i+1);
                break;
            }
        }
        if(count!=0)
        {
            if(sum<=l)
            {
                printf("Case %d: Yes\n",i+1);
            }
            else
            {
                printf("Case %d: No\n",i+1);
            }
        }
    }
    return 0;
}
