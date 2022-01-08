#include<bits/stdc++.h>
using namespace std;
typedef long long int lli ;

int main()
{
    lli n,m;
    cin>>n>>m;
    lli a[n];
    lli count=0;
    for(lli i=0;i<n;i++)
    {
        a[i]=1;
    }
    for(lli i=0;i<m;i++)
    {
        string t,th,dire,of,no;
        cin>>t>>th>>dire>>of>>no;
        if(dire[0]=='l')
        {
            for(lli i=0;i<no-1;i++)
            {
                a[i]=-1;
                
            }
        }
        else
        {
            for(lli i=no-1;i<n;i++)
            {
                a[i]=-1;
            }
        }

    }
    for(lli i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}