#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char arr[1000];
    while(gets(arr)!='\0')
    {
        for(i=0; i<strlen(arr); i++)
        {
            if(arr[i]=='"')
            {
                if(count==0)
                {
                    printf("``");
                    count=1;
                }
                else if(count==1)
                {
                    printf("''");
                    count=0;
                }
            }
            else
            {
                printf("%c",arr[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
