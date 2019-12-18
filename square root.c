#include<stdio.h>
#include<math.h>
int main()
{
    long double y,x;
    int t,i;
    double m;
    scanf("%d\n",&t);
    for(i=0; i<t; i++)
    {
        scanf("%llf",&y);
        x=sqrt(y);
        m=x;
        printf("%lf\n",m);
        if(i<t)
        {
            printf("\n");
        }
    }
    return 0;
}
