#include<stdio.h>
int main()
{
    int a,b,i;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a>b)
        {
            printf("%d\n",a);
        }
        else
        {
            printf("%d\n",b);
        }
    }
    return 0;
}
