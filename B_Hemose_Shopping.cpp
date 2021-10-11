#include <bits/stdc++.h>
#define ii int
#define ll long long
#define cii const int
#define cll const long long
#define opt ios_base::sync_with_stdio(0); cin.tie(0)
#define lp(a, b, c) for(ll a = b; a <= c; a++)
#define lpd(a, b, c) for(ll a = b; a >= c; a--)
#define pp(a, b) pair<a, b>
#define vec(a) vector<a>
#define vecite(a) vector<a>::iterator
#define fi first
#define se second
#define mp(a, b) map<a, b>
#define setE(a, b) fill_n(a, sizeof(a)/sizeof(a[0]), b)
#define st(a) system((a).c_str());
using namespace std;
cll MOD = 1e9 + 7;
const double esf = 1e-9;
const string tenfile = "f";
#define file freopen((tenfile + ".inp").c_str(), "r", stdin); freopen((tenfile + ".out").c_str(), "w", stdout)

cll mxn = 1e5 + 7;
ll n, x, a[mxn];
vec(ll) b;

ii main(){
    opt;
    ll tests;
    cin >> tests;
    while(tests --> 0){
        b.clear();
        cin >> n >> x;
        lp(i, 1, n) cin >> a[i];
        bool ans = 1;
        if(n - x + 1 > x){
            cout << "YES\n";
            continue;
        }
        lp(i, 1, n - x) b.push_back(a[i]);
        lp(i, x + 1, n) b.push_back(a[i]);
        b.push_back(-1e16);
        sort(b.begin(), b.end());
        lp(i, n - x + 1, x - 1){
            if(a[i] > a[i + 1]) ans = 0;
        }
        if(b[n - x] <= a[n - x + 1] && a[x] <= b[n - x + 1]) ans = 1;
        else ans = 0;
        cout << (ans ? "YES\n" : "NO\n");
    }
}
