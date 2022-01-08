#include<set>
#include<map>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
bool mark[200005];
vector<int>a[200005];
long long v,e;
void dfs(int x)
{
    v++;
    mark[x]=true;
    for(int i=0;i<a[x].size();i++)
    {
        e++;
        if(!mark[a[x][i]])
            dfs(a[x][i]);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
        if(!mark[i])
        {
            v=e=0;
            dfs(i);
            if(v*(v-1)!=e)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    cout<<"YES"<<endl;
}