#include<stdio.h>
int main()
{
    long long int arr[9],max=1000000000,j,sum,i,k;
    for(i=0; i<6; i++)
    {
        scanf("%lld",&arr[i]);
    }
    if(arr[4]<arr[5])
    {
        for(i=1; i<=3; i++)
        {
            if(max>arr[i])
            {
                max=arr[i];
            }
        }
        sum=max*arr[5];
        j=arr[3]-max;
        if(j>arr[0])
        {
            sum=sum+arr[0]*arr[4];
        }
        else
        {
            sum=sum+j*arr[4];
        }
    }
    else
    {
        if(arr[0]>arr[3])
        {
          sum=arr[3]*arr[4];
          k=arr[3];
        }
        else
        {
            sum=arr[0]*arr[4];
            k=arr[0];
        }
        arr[3]=arr[3]-k;
        for(i=1;i<=3;i++)
        {
            if(max>arr[i])
            {
                max=arr[i];
            }
        }
        sum=sum+max*arr[5];
    }
    printf("%lld\n",sum);
}