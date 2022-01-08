#include<iostream>
#include<cstring>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#include<climits>
#include<iomanip>
#define lli long long int
#define GO_FAST ios_base::sync_with_stdio(0);ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

bool marked_DFS[100000] = {0};
map<lli,vector<lli>> g;
long double ans=0;
void DFS(int v,lli d,lli prob)
{
    //cout<<"at node "<<v<<" "<<"prob = "<<prob<<"\n";
    marked_DFS[v] = 1;
    bool is_leaf=1;
    for(auto i:g[v])
    {
        if(marked_DFS[i] == 0)
        {
            is_leaf = 0;
            if(g[i].size() == 0)
                DFS(i,d+1,prob);
            else
                DFS(i,d+1,prob*g[i].size());
        }
    }
    if(is_leaf == 1)
    {
        //cout<<"For leaf Node "<<v<<" distance from Root = "<<d<<"\n";
        long double num = d;
        long double denom = prob;
        ans += num/denom;
    }
}

void Display()
{
    cout<<"\n----------------------\n";

    for(auto i:g)
    {
        cout<<i.first<<" -> ";
        for(auto j:i.second)
            cout<<j<<" ";
        cout<<"\n";
    }
    cout<<"\n----------------------\n";
}

int main()
{
    //GO_FAST
    lli n;
    cin>>n;
    for(int i=1; i<=n-1; i++)
    {
        lli u,v;
        cin>>u>>v;
        g[u].push_back(v);
    }
    //Display();
    DFS(1,0,g[1].size());
      cout << fixed << setprecision(9)<<ans<<"\n";

    return 0;
}
