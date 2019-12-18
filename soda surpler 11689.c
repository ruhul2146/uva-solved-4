#include<stdio.h>
int main()
{
    int t,e,f,c,i,sum,res;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&e,&f,&c);
        sum=e+f;
        res=0;
        while(sum>=c)
        {
            res=res+sum/c;
            sum=(sum/c)+(sum%c);
        }
        printf("%d\n",res);
    }
    return 0;
}
