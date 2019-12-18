#include<stdio.h>
#include<string.h>
int main()
{
    long long int i,sum=0,k,m,l;
    char arr[1000];
    scanf("%s",arr);
    k=((arr[(strlen(arr))-3]-'0')*10)+(arr[(strlen(arr))-2]-'0');
    m=strlen(arr)-3;
    l=(arr[(strlen(arr))-1]-'0')*5;
    if(k<l)
    {
        k=(arr[(strlen(arr)-4)]-'0')*100+k;
        m=strlen(arr)-4;
    }
    printf("%lld",k);
}
