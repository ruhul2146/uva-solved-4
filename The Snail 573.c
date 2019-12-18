#include<stdio.h>
int main()
{
    double h,u,d,f;
    double s,sum,start;
    int i,j;
    for(i=0; i>=0; i++)
    {
        scanf("%lf%lf%lf%lf",&h,&u,&d,&f);
        if(h==0)
        {
            break;
        }
        s=((f*1.0)/100)*u;
        start=0;
        sum=0;
        for(j=0; j>=0; j++)
        {
            sum=start+u;
            if(sum>h)
            {
                printf("success on day %d\n",j+1);
                break;
            }
            start=sum-d;
            if(u>0)
            {
            u=u-s;
            }
            else
            {
                u=0;
            }
            if(start<0)
            {
                printf("failure on day %d\n",j+1);
                break;
            }

        }
    }
    return 0;
}
