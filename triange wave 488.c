#include<stdio.h>
int main()
{
    int i,t,amp,freq,j,col,row;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d",&amp,&freq);
        for(j=0; j<freq; j++)
        {
            for(row=1; row<=amp; row++)
            {
                for(col=1; col<=row; col++)
                {
                    printf("%d",row);
                }
                printf("\n");
            }
            for(row=amp-1; row>=1; row--)
            {
                for(col=row; col>=1; col--)
                {
                    printf("%d",row);
                }
                printf("\n");
            }
            if(freq!=j+1)
            {
                printf("\n");
            }
        }
        if(t!=i+1)
        {
            printf("\n");
        }
    }
    return 0;
}
