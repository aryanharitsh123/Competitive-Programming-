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

class Pair{
  public:
    lli first, second;
    Pair(lli x, lli y){
      first = x;
      second = y; 
    }
};

vector<Pair> merge_intervals(vector<Pair>& v) {

  if(v.size() == 0) {
    return v;
  }

  vector<Pair> result;
  result.push_back(Pair(v[0].first, v[0].second));

  for(lli i = 1 ; i < v.size(); i++){
    lli x1 = v[i].first;
    lli y1 = v[i].second;
    lli x2 = result[result.size() - 1].first;
    lli y2 = result[result.size() - 1].second;

    if(y2 >= x1){
      result[result.size() - 1].second = max(y1, y2);
    }
    else{
      result.push_back(Pair(x1, y1));
    }
  }
  return result;
}

void solve(int testcase) {
    lli n,k,f;
    cin >> n >> k >> f;
    vector <Pair> v;

    for(int i=0;i<n;i++){
        lli a,b;
        cin >> a >> b;
        v.pb(Pair(a,b));
    }

    vector<Pair> result = merge_intervals(v);
    lli ans = 0;
    for(lli i = 0; i < result.size(); i++){
        ans += abs(result[i].second - result[i].first);
    }
    
    if(f-ans>=k){
        cout << "YES\n";
    }
    else cout << "NO\n";

}

void solve2() {
    lli n,k,f;
    cin >> n >> k >> f;
    vector<lli> startTime, endTime;
    for(int i=0;i<n;i++){
        lli a,b;
        cin >> a >> b;
        startTime.push_back(a);
        endTime.push_back(b);
    }
    sort(startTime.begin(), startTime.end());
    sort(endTime.begin(), endTime.end());
    lli count=1;
    lli startPrev = -1, endPrev = -1;
    int firstPtr =  1, secondPtr = 0;
    
    while(firstPtr < n) {
        if(endTime[secondPtr]<=startTime[firstPtr]) {
            ++secondPtr;
            --count;
        } else {
            ++firstPtr;
            ++count;
        }
        if(count == 0) {

        }
    }
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

