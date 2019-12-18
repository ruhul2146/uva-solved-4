#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j;
    char str[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",str);
        if(str[strlen(str)-1]=='5'&&str[strlen(str)-2]=='3')
        {
            printf("-\n");
        }
        else if(str[0]=='9'&&str[strlen(str)-1]=='4')
        {
            printf("*\n");
        }
        else if(str[0]=='1'&&str[1]=='9'&&str[2]=='0')
        {
            printf("?\n");
        }
        else if(strcmp(str,"1")==0||strcmp(str,"4")==0||strcmp(str,"78")==0)
        {
            printf("+\n");
        }
        else
        {
            printf("?\n");
        }
    }
    return 0;
}
