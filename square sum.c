#include<stdio.h>
int main()
{
    int n,i,k,j,m,count,p;
    for(i=0; i>=0; i++)
    {
        scanf("%d",&n);
        m=1;
        p=n/2;
        count=0;
        int arr[n+2][n+2];
        if(n==0)
        {
            break;
        }
        else
        {
            for(j=1; j<=n; j++)
            {
                for(k=1; k<=n; k++)
                {
                    scanf("%d",&arr[j][k]);
                }
            }
            printf("Case %d:",i+1);
            while(n>p)
            {
                count=0;
                for(j=m; j<=n; j++)
                {
                    if(j==m||j==n)
                    {
                        for(k=m; k<=n; k++)
                        {
                            count=count+arr[j][k];
                        }
                    }
                    else
                    {
                        count=count+arr[j][m];
                        count=count+arr[j][n];
                    }
                }
                if(n>=p+1)
                {
                    printf(" ");
                }
                printf("%d",count);
                m++;
                n=n-1;
            }
            printf("\n");
        }
    }
    return 0;
}
