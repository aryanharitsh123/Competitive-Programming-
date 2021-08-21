#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MOD = 1000000007;


int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n, k; cin >> n >> k;

    vector<int> v[n + 1];


    map<ll, vector<ll>> mp;

    for (ll i = 0; i < n; i++) {
      int x;
      cin >> x;
      v[x].push_back(i);
    }

    vector<ll> res(n,-1);
    vector<ll> extra;
    for (int i = 1; i <= n; i++) {
      if (v[i].size() >= k) {
        for (int j = 0; j < k; j++) {
          res[v[i][j]] = j;
        }
      } else {
        for (int x : v[i]) {
          extra.push_back(x);
          if (extra.size() >= k) {
            int id = 0;
            for (int j : extra) {
              res[j] = id++;
            }
            extra.clear();
          }
        }
      }
    }
    for (int i : res) cout << i + 1 << ' ';
    cout << endl;

  }
  return 0;
}