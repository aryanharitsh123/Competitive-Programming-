#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

#define all(arr) arr.begin(),arr.end()
#define ff first
#define ss second
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
#define s(s)	scanf("%s",s)
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
bool cmp(pair<ll,ll>a, pair<ll,ll>b){
    if(a.ff > b.ff){
        return true;
    }else if(a.ff == b.ff){
        if(a.ss > b.ss){
            return true;
        }
    }
    return false;
}
void solve(int testcase) {
        ll n,k,i;
        cin>>n;
        vector<ll>v(n);
        vector<pair<ll,ll>>vp(n);
        for(i=0; i<n; i++){
            cin>>v[i];
            if(i!=0){
            vp[i].ff = v[i];
            vp[i].ss = i;
            }
        }
        ll c=0;
        ll top = v[0];
        sort(vp.begin(), vp.end(), cmp);
        ll x = 0, q=0;
        for(i=0; i<n; i++){
            if(vp[i].ff <= top && x<vp[i].ss){
                top = vp[i].ff;
                x = vp[i].ss;
                c++;
            }else if(vp[i].ff > top && x<vp[i].ss){
                q=1;
                break;
            }
        }
        if(q==1){
            c=-1;
        }
        cout<<c<<"\n";

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