#include<math.h>
#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
    long double x,y;
    int t,i,m;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>y;
        x=(sqrt(y));
        cout<<fixed;
        cout<<setprecision(0)<<x<<endl;
        if(i<t)
        {
            cout<<endl;
        }
    }
}
