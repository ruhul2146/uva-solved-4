#include<stdio.h>
int main()
{
    int s,i,arr[100],count,j;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        count=0;
        for(j=0;j<13;j++)
        {
            scanf("%d",&arr[j]);
            if(arr[j]>0)
            {
                count++;
            }
        }
        if(count==13)
        {
            printf("Set #%d: Yes\n",i+1);
        }
        else
        {
             printf("Set #%d: No\n",i+1);
        }
    }
    return 0;
}
