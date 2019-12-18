#include<stdio.h>
int main()
{
    int p,h,obj,sum;
    while(scanf("%d%d%d",&p,&h,&obj)!=EOF)
    {
        sum=obj-p;
        if(sum>=h)
        {
            printf("Props win!\n");
        }
        else
        {
            printf("Hunters win!\n");
        }
    }
    return 0;
}
