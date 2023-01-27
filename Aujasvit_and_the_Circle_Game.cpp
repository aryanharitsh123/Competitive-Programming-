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
long long int m, x;
        cin >> m >> x;
        vector<long long int> a(x + 1, 0);
        a[1] = 1;
        m = m - 1;
        for (int i = 2; i <= x; i++)
        {
            if (true)
            {
                long long int l = m % i + 1;
                int k = 0;
                int flag = true;
                if (i == 2 && k == 0 && flag)
                {
                    if (l == 1)
                    {
                        a[i] = 2;
                        for (int h = 0; h < 1; h++)
                        {
                            h = h+1;
                        }
                    }
                    else
                    {
                        a[i] = 1;
                        for (int h = 0; h < 1; h++)
                        {
                            h = h+2;
                        }
                    }
                }
                else
                {
                    long long int p = a[i - 1];
                    if (l == 1 && k == 0)
                    {
                        a[i] = a[i - 1] + 1;
                        for (int h = 0; h < 1; h++)
                        {
                            h = h+1;
                        }
                    }
                    else if (flag)
                    {
                        if (p < l && flag)
                        {
                            a[i] = p;
                            for (int h = 0; h < 2; h++)
                            {
                                h = h+1;
                            }
                        }
                        else
                        {
                            a[i] = p + 1;
                        }
                    }
                }
            }
        }

        for (int i = 1; i <= x; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
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
