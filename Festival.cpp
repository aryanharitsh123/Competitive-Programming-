#include <bits/stdc++.h>
// #include "phoenix.h"
#define ceil(n, m) (((n) / (m)) + ((n)%(m) ? 1 : 0))
#define endl "\n"
#define NumOfDig(n) log10(n) + 1
#define MOD 1000000007
#define INF 2000000000
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define EPS 1e-9
#define PI1 acos(-1)
#define PI2 3.141592653
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
// #define getline(s) getline(cin >> ws, s)
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
 
int main(void)
{
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int testcases = 1;
    cin >> testcases;
    for (int test = 1; test <= testcases; test++)
    {
        int d, n, k;
        ll sum = 0, Max = 0;
        cin >> d >> n >> k;
        vector<priority_queue<ll>> day(d + 1);
        for (int i = 0; i < n; i++) {
            ll h, s, e;
            cin >> h >> s >> e;
            for (int j = s; j <= e; j++) {
                day[j].push(h);
            }
        }
        for (auto & vec : day) {
            sum = 0;
            int sz = k;
            while (!vec.empty() && sz--) {
                sum += vec.top();
                vec.pop();
            }
            Max = max(Max, sum);
        }
        cout << "Case #" << test << ": "<< Max << endl;
    }
    return 0;
}