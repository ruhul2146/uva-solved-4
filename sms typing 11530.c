#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,j,count,len;
    char arr[1005];
    scanf("%d",&t);
    getchar();
    for(i=0; i<t; i++)
    {
        gets(arr);
        len=strlen(arr);
        count=0;
        for(j=0; j<len; j++)
        {
            if(arr[j]=='a'||arr[j]=='d'||arr[j]=='g'||arr[j]=='j'||arr[j]=='m'||arr[j]=='p'||arr[j]=='t'||arr[j]=='w'||arr[j]==' ')
            {
                count=count+1;
            }
            else if(arr[j]=='b'||arr[j]=='e'||arr[j]=='h'||arr[j]=='k'||arr[j]=='n'||arr[j]=='q'||arr[j]=='u'||arr[j]=='x')
            {
                count=count+2;
            }
            else if(arr[j]=='c'||arr[j]=='f'||arr[j]=='i'||arr[j]=='l'||arr[j]=='o'||arr[j]=='r'||arr[j]=='v'||arr[j]=='y')
            {
                count=count+3;
            }
            else
            {
                count=count+4;
            }
        }
        printf("Case #%d: %d\n",i+1,count);
    }

    return 0;
}
