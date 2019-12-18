#include<stdio.h>
int main()
{
    int i,n,store,sum;
    for(i=0;i>=0;i++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
        {
            store=0;
            while(n>1)
            {
                store=store+n/3;
                sum=(n/3)+(n%3);
                if(sum==2)
                {
                    store=store+1;
                    break;
                }
                n=sum;

            }
            printf("%d\n",store);
        }
    }
    return 0;
}
