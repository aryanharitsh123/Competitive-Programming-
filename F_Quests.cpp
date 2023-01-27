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

int n,d,ar[200010];
long long c;

bool check(int k,int days){
	vector <int> q (days,-1);
	int idx = 1;
	for(int i = 0;i<days;i++){
		if(q[i] != -1){
			continue;
		}
		for(int j = i;j<days;j += k + 1){
			if(idx > n){
				q[j] = 0;
			}else{
				q[j] = ar[idx];
			}
		}
		idx++;
	}
	long long sum = 0;
	for(int i = 0;i<days;i++){
		sum += 1LL * q[i];
	}
	return (sum >= c);
}
int main() {
	
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%lld%d",&n,&c,&d);
		for(int i = 1;i<=n;i++){
			scanf("%d",&ar[i]);
		}
		sort(ar+1,ar+1+n);
		reverse(ar+1,ar+1+n);
		if(check(d-1,d)){
			puts("Infinity");
			continue;
		}else if(!check(0,d)){
			puts("Impossible");
			continue;
		}
		int lo = 0,hi = d,res = 0;
		while(lo <= hi){
			int md = (lo+hi)/2;
			if(check(md,d)){
				res = md;
				lo = md+1;
			}else{
				hi = md-1;
			}
		}
		printf("%d\n",res);
	}
	return 0;
}