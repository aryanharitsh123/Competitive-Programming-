#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnts=0,cntd=0,s=0;
    cin>>n;
    int z=n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<z;i++)
    {
        if(s%2==0)
        {
            int big=max(v[0],v[n-1]);
            cnts=cnts+big;
            s++;
            for(auto itr=v.begin();itr!=v.end();++itr)
            {
            if(*itr==big)
               {
                  v.erase(itr);
               }
            }
            cout << n << endl;
        }
        else if(s%2==1)
        {
            int big=max(v[0],v[n-1]);
            cntd=cntd+big;
            s++;
            for(auto itr=v.begin();itr!=v.end();++itr)
            {
            if(*itr==big)
               {
                  v.erase(itr);
               }
            }
        }
    }
    cout<<cnts<<" "<<cntd;
    return 0;
}