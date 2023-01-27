#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define array_input(n,arr) for(int i=0;i<n;i++) cin>>arr[i] 
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<endl
#define debug1(x) cout<<x<<endl 
#define debug2(x,y) cout<<x<<endl  
#define debug3(x,y,z) cout<<x<<endl<<y<<endl<<z<<endl 
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


ll binpow(ll a, ll b) {
ll res = 1;
while (b > 0) {
if (b & 1)
res = res * a;
a = a * a;
b >>= 1;
}
return res;
}
long long int highestPowerof2(long long int n)
{
   ll p = (ll)log2(n);
   return (ll)pow(2, p); 
}
int main(){
fast
ll n;
cin>>n;
string s;
ll i=1;
while(n>0){
ll x=highestPowerof2(n);
n=n-x;
ll poer=log2(x);
if(i==1){
    for(ll i=0;i<=poer;i++)
    {
        s+='0';
    }
    s[0]='2';
}
else 
{
    s[s.size()-poer-1]='2';
}
i++;
}
cout<<s<<endl;
return 0;
}