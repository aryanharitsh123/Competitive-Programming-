#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli s,sum=0;
        cin>>s;
        while(s>0)
        {
            sum=sum+s;
            s=s/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}