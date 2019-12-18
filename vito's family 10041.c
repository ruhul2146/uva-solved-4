#include<stdio.h>
#include<math.h>
int main()
{
  long long int r,s,t,i,j,min,k,sum,temp;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        sum=0;
        min=1000000000000;
        scanf("%lld",&r);
        int arr[r+3];
        for(j=0; j<r; j++)
        {
            scanf("%lld",&arr[j]);
        }
        for(j=0; j<r; j++)
        {
            for(k=0; k+1<r; k++)
            {
                if(arr[k+1]<arr[k])
                {
                    temp=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=temp;
                }
            }
        }
        for(j=0; j<r; j++)
        {
            sum=0;
            for(k=0; k<r; k++)
            {
                sum=sum+abs(arr[j]-arr[k]);
            }
            if(min>sum)
            {
                min=sum;
            }
        }
        printf("%lld\n",min);
    }
    return 0;
}
