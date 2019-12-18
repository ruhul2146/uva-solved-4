#include<stdio.h>
//solid sphere area is 4*pi*r*r
int main()
{
    double profit,n,i,sum;
    char ch='%';
    for(i=0; i>=0; i++)\
    {
        scanf("%lf",&n);
        if(n<=0)
        {
            break;
        }
        else
        {
            if(n==1)
            {
                printf("0%c\n",ch);
            }
            else
            {
                sum=4/n;
                profit=(sum/4)*100;
                printf("%.0lf",profit);
                printf("%c\n",ch);
            }

        }
    }
    return 0;
}
