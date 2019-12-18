#include<stdio.h>
int main()
{
    double x,y,z,i,sum1,sum2,sum3,ave;
    int t,a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf%lf%lf",&x,&y,&z);
        a=x;b=y;
        ave=z/(x+y);
        if(a>b)
        {
            sum1=a*ave;
        sum2=(a-b)*ave;
        sum3=sum1+sum2;
        }
        else
        {
            sum1=b*ave;
            sum2=(b-a)*ave;
            sum3=z-(sum1+sum2);
        }
        printf("%.0lf\n",sum3);
    }
    return 0;
}
