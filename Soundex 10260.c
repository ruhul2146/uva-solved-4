#include<stdio.h>
#include<string.h>
int main()
{
    int j,k=0;
    char arr[1000];
    while(gets(arr))
    {
        for(j=0; j<strlen(arr); j++)
        {
            if(arr[j]=='B'||arr[j]=='F'||arr[j]=='P'||arr[j]=='V')
            {
                if(arr[j-1]!='B'&&arr[j-1]!='F'&&arr[j-1]!='P'&&arr[j-1]!='V')
                {
                    printf("1");
                }
            }
            else if(arr[j]=='C'||arr[j]=='G'||arr[j]=='J'||arr[j]=='K'||arr[j]=='Q'||arr[j]=='S'||arr[j]=='X'||arr[j]=='Z')
            {
                if(arr[j-1]!='C'&&arr[j-1]!='G'&&arr[j-1]!='J'&&arr[j-1]!='K'&&arr[j-1]!='Q'&&arr[j-1]!='S'&&arr[j-1]!='X'&&arr[j-1]!='Z')
                {
                    printf("2");
                }
            }
            else if(arr[j]=='D'||arr[j]=='T')
            {
                if(arr[j-1]!='D'&&arr[j-1]!='T')
                {
                    printf("3");
                }
            }
            else if(arr[j]=='L')
            {
                if(arr[j-1]!='L')
                {
                    printf("4");
                }
            }
            else if(arr[j]=='M'||arr[j]=='N')
            {
                if(arr[j-1]!='M'&&arr[j-1]!='N')
                {
                    printf("5");
                }
            }
            else if(arr[j]=='R')
            {
                if(arr[j-1]!='R')
                {
                    printf("6");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
