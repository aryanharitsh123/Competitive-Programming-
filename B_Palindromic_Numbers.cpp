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
int checkPalindrome(string str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}
vector<string> pre;
void compute(){
    for(int i=10;i<=1e6;i++){
        string s = to_string(i);
        if(checkPalindrome(s)){
            pre.push_back(s);
        }
    }
}


bool len(int s,int l){
  string x = to_string(s);
  if(x.length()==l) return true;
  else return false;
}

void solve(int testcase) {
ll n;
        cin>>n;
        string s;
        cin>>s;
        ll pos=-1;
        if (s[0]!='9')
        {
            string ans="";
            for (ll i=0;i<n;i++)
            {
                ll p1=s[i]-'0';
                string ch="";
                ch+=to_string(9-p1);
                ans+=ch;
            }
            cout<<ans<<endl;
        }
        else
        {
            string ans="",a="";
            for (ll i=0;i<n;i++)
            {
                ll p1=s[i]-'0';
                string ch="";
                ch+=to_string(9-p1);
                ans+=ch;
            }
            ll carry=0;
            for (ll i=ans.size()-1;i>=0;i--)
            {
                ll p1=ans[i]-'0';
                ll sum=p1+2+carry;
                string c="";
                c+=to_string(sum%10);
                carry=sum/10;
                a+=c;
            }
            reverse(a.begin(),a.end());
            cout<<a<<endl;
}
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  lli testcases=1;
  cin >> testcases;
  compute();
  for(int testcase=0; testcase<testcases; testcase++) {
    solve(testcase);
  }
}
