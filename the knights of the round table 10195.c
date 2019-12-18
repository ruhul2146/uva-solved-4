#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,r,s,area;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
        s=(a+b+c)/2;
        if(s!=0)
        {
            area=sqrt(s*(s-a)*(s-b)*(s-c));
            r=area/s;
            printf("The radius of the round table is: %.3lf\n",r);
        }
        else
        {
            r=0;
            printf("The radius of the round table is: %.3lf\n",r);
        }
    }
    return 0;
}
