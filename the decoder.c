#include<stdio.h>
int main()
{
    int i;
    char arr[1000];
    while(gets(arr)!='\0')
    {
        for(i=0;i<strlen(arr);i++)
        {
            arr[i]=arr[i]-7;
        }
        printf("%s\n",arr);
    }
    return 0;
}
