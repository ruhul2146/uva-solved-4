#include<stdio.h>
int main()
{
  long long int n,i,sum,count=0,flag;
    for(i=1; i>=1; i++)
    {
        sum=i;
        flag=1;
        while(sum>0)
        {
            flag=1;
            if(sum%2==0)
            {
                flag=0;
                sum=sum/2;
            }
            else if(sum%3==0)
            {
                flag=0;
                sum=sum/3;
            }
            else if(sum%5==0)
            {
                flag=0;
                sum=sum/5;
            }
            if(sum==1||sum==2||sum==3||sum==5)
            {
                flag=0;
                count=count+1;
                break;
            }
            if(sum==7)
            {
                flag=1;
            }
            if(flag!=0)
            {
                break;
            }
        }
        if(count<=1500&&flag==0)
        {
            printf("%lld\n",i);
        }
    }
}
