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

int count(string a, string b){
    int m = a.length();
    int n = b.length();
    int lookup[m + 1][n + 1] = { { 0 } };
 

    for (int i = 0; i <= n; ++i)
        lookup[0][i] = 0;
 
    for (int i = 0; i <= m; ++i)
        lookup[i][0] = 1;
 
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i - 1] == b[j - 1])
                lookup[i][j] = lookup[i - 1][j - 1] +
                               lookup[i - 1][j];
                 
            else
                lookup[i][j] = lookup[i - 1][j];
        }
    }
 
    return lookup[m][n];
}

void solve(int testcase) {
    int n;
    cin >> n;
    vector<lli> vec;
    input(vec,n);
    vector<int> one;
    vector<int> zero;

    for(int i=0;i<n;i++){
        if(i%2==0){
            zero.push_back(vec[i]);
        }
        else one.push_back(vec[i]);
    }

    sort(all(one));
    sort(all(zero), greater<int>());
    vector<int> ans;
    lli ans1=0;
    string temp;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            ans.push_back(zero[x]);
            x++;
        }
        else{
            ans.push_back(one[y]);
            y++;
        }
    }
    //output(ans);
    for(int i=0;i<n;i++){
        for(int j = 0 ;j<ans[i];j++){
            if(i%2==0){
                temp+='0';
            }
            else{
                temp+='1';
            }
        }
    }
    string b = "01";
    output(ans);
    cout << count(temp,b) << endl;

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
