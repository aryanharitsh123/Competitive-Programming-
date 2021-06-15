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
void solve(int testcase) {
    lli n;
    cin >> n;
    vector<pair<lli,lli>> pr1;
    vector<pair<lli,lli>> pr2;
    multiset<lli>ml1;
    multiset<lli>ml2;
    lli x,y;
    for(lli i=0;i<n;i++){
      cin >> x >> y;
      ml1.insert(x);
      ml2.insert(y);
      pr1.pb(make_pair(x,y));
      pr2.pb(make_pair(y,x));
    }
    sort(all(pr1));
    sort(all(pr2));

    lli t1 = 0,t2 = 0,tmx = INT_MIN,tmn = LONG_MAX,ans = LONG_MAX;

    for (int i = 0; i < n - 1; ++i) {
      tmx = max(tmx, pr1[i].second);
      tmn = min(tmn, pr1[i].second);
      t1 = tmx - tmn;
      auto p = ml2.find(pr1[i].second);
      ml2.erase(p);
      t2 = *ml2.rbegin() - *ml2.begin();
      lli newArea = (pr1[i].first - pr1[0].first) * t1 + (pr1[n - 1].first - pr1[i + 1].first) * t2;
      ans = min(ans, newArea);
    }

    lli k1 = 0, k2 = 0,kmx = INT_MIN,kmn = LONG_MAX;

    for (int i = 0; i < n - 1; ++i) {
      kmx = max(kmx, pr2[i].second);
      kmn = min(kmn, pr2[i].second);
      k1 = kmx - kmn;
      auto o = ml1.find(pr2[i].second);
      ml1.erase(o);
      k2 = *ml1.rbegin() - *ml1.begin();
      lli newArea = (pr2[i].first - pr2[0].first) * k1 +(pr2[n - 1].first - pr2[i + 1].first) * k2;
      ans = min(ans, newArea);
    }

    if (ans == LONG_MAX)
      ans = 0;
    cout << ans << endl;
    
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
