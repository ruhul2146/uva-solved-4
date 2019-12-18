#include<stdio.h>
int main()
{
    int n,i,j,sum,d,s,arr[10000],in,a,b;
    double ave,res1,res2,res3,res4;
    for(i=0; i>=0; i++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        sum=0;
        res1=0;
        res2=0;
        res3=0;
        res4=0;
        for(j=0; j<n; j++)
        {
            scanf("%d.%d",&d,&s);
            arr[j]=(d*100)+s;
            sum=sum+arr[j];
        }
        ave=(sum*1.0/n);
        ave=ave*10;
        in=ave;
        if(in%10>=5)
        {
            ave=(ave/10)+1;
        }
        else
        {
            ave=ave/10;
        }
        in=ave;
        for(j=0; j<n; j++)
        {
            if(arr[j]>ave)
            {
                res1=res1+arr[j]-ave;
            }
            if(arr[j]>in)
            {
                res2=res2+arr[j]-in;
            }
            if(arr[j]<ave)
            {
                res3=res3+ave-arr[j];
            }
            if(arr[j]<in)
            {
                res4=res4+in-arr[j];
            }

        }
        if(res2==0)
        {
            res2=res1;
        }
        if(res4==0)
        {
            res4=res3;
        }
        a=res2;
        b=res4;
        if(a>b)
        {
            printf("$%.2lf\n",b*1.0/100);
        }
        else
        {
            printf("$%.2lf\n",a*1.0/100);
        }
    }
    return 0;
}
