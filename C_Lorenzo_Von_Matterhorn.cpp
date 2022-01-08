#include<bits/stdc++.h>
using namespace std;
#define ll long long
map< pair<ll,ll> , ll> mp;
int main()
{
	int q,type,p,i;
	ll res,u,v,w;
	cin>>q;
	while(q--)
    {
        cin>>type>>u>>v;
        if(type==1)
        {
            cin>>w;
            if(u>v)
                swap(u,v);
            vector<ll> path1,path2;
            while(u)
            {
                path1.push_back(u);
                u/=2;
            }
            reverse(path1.begin(),path1.end());
            while(v)
            {
                path2.push_back(v);
                p=lower_bound(path1.begin(),path1.end(),v)-path1.begin();
                if(p<path1.size()&&path1[p]==v)
                    break;
                v/=2;
            }
            for(i=p;i<path1.size()-1;i++)
                mp[make_pair(path1[i],path1[i+1])]+=w;
            for(i=path2.size()-1;i>0;i--)
                mp[make_pair(path2[i],path2[i-1])]+=w;
        }
        else
        {
            if(u>v)
                swap(u,v);
            vector<ll> path1,path2;
            while(u)
            {
                path1.push_back(u);
                u/=2;
            }
            reverse(path1.begin(),path1.end());
            while(v)
            {
                path2.push_back(v);
                p=lower_bound(path1.begin(),path1.end(),v)-path1.begin();
                if(p<path1.size()&&path1[p]==v)
                    break;
                v/=2;
            }
            res=0;
            for(i=p;i<path1.size()-1;i++)
                res+=mp[make_pair(path1[i],path1[i+1])];
            for(i=path2.size()-1;i>0;i--)
                res+=mp[make_pair(path2[i],path2[i-1])];
            cout<<res<<endl;
        }
    }
	return 0;
}