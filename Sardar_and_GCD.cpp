#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

#define all(arr) arr.begin(),arr.end()
#define f first
#define s second
#define debug1(x) cout<<x<<"\n"
#define debug2(x,y) cout<<x<<" "<<y<<"\n"
#define debug3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
#define nl cout<<"\n";
#define pq priority_queue
#define inf 0x3f3f3f3f
#define test cout<<"abcd\n";
#define pi pair<int,int>
#define pii pair<int,pi>
#define pb push_back
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define MOD 1000000007
#define space ' '
#define kick(t) cout << "Case #" << t+1 << ":" << endl;

typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

template <typename T>
void input(vector<T> &arr,lli n) {
  T temp;
  for(lli i=0;i<n;i++) cin>>temp, arr.push_back(temp);
}

template <typename T>
void output(vector<T> arr) {
  for(auto x:arr) cout<<x<<" ";
  cout<<endl;
}


template <typename T>
void input_set(set<T> &arr,lli n) {
  T temp;
  for(lli i=0;i<n;i++) cin>>temp, arr.insert(temp);
}

lli mul(lli a, lli b) {
  return (a%MOD*b%MOD)%MOD;
}

lli power(lli a,lli b) {
  lli ans = 1;
  while(b > 0) {
    if(b&1)
      ans = mul(ans, a);
    a = mul(a,a);;
    b >>= 1;
  }
  return ans;
}

lli __gcd(lli a, lli b)
{
    if (b == 0)
        return a;
    return __gcd(b, a % b);
     
}

void dfs(vector<vector<ll>> & graph, vector<ll> & gcd, ll u, ll par){
    for(auto & to:graph[u]){
        if(to == par) continue;
        dfs(graph,gcd,to,u);
        gcd[u] = __gcd(gcd[u],gcd[to]);
    }
}

ll ans=0;

void dfs1(vector<vector<ll>> & graph, vector<ll> & gcd, ll u, ll par, ll exc, vector<ll> & arr){
    ll temp = exc;
    for(auto & to:graph[u]){
        if(to == par) continue;
        temp+=gcd[to];
    }
    ans=max(ans,temp);
    ll transfer = __gcd(arr[u],exc);
    ll n = graph[u].size();
    if(par!=-1){
        n--;
    }
    vector<ll> pref(n+2,transfer),suff(n+2,transfer);
    ll idx=0;
    for(auto & to:graph[u]){
        if(to == par) continue;
        idx++;
        pref[idx]=__gcd(pref[idx],gcd[to]);
        suff[idx]=__gcd(suff[idx],gcd[to]);
    }
    for(ll i=1;i<=n;i++){
        pref[i] = __gcd(pref[i],pref[i-1]);
    }
    for(ll i=n;i>=1;i--){
        suff[i]=__gcd(suff[i],suff[i+1]);
    }
    idx=0;
    for(auto & to:graph[u]){
        if(to == par) continue;
        idx++;
        ll combine = __gcd(pref[idx-1], suff[idx+1]);
        dfs1(graph,gcd,to,u,combine,arr);
    }
}

void solve(int testcase) {
    lli n;
    cin>>n;
    ans=0;
    vector<vector<ll>> graph(n);
    for(ll i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        u--,v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll> gcd(arr.begin(),arr.end());
    dfs(graph,gcd,0,-1);
    dfs1(graph,gcd,0,-1,0,arr);
    cout<<ans<<endl;
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  lli testcases=1;
  cin >> testcases;
  for(int testcase=0; testcase<testcases; testcase++) {
    solve(testcase);
  }
}