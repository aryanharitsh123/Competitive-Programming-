#include<bits/stdc++.h>
#define all(arr) arr.begin(),arr.end()
using namespace std;
typedef long long int lli;
int main() {
    lli n, m, k;
    cin >> n >> m >> k;
    vector<lli> a(n+1, 0), b(m+1, 0);
    for(int i=1; i<=n; i++) {
        cin >> a[i];
        a[i]+=a[i-1];
    }
    
    for(int i=1; i<=m; i++) {
        cin >> b[i];
        b[i]+=b[i-1];
    }

    int ans = 0;
    for(int count=0; count<=min(n, m); count++) {
        lli total = a[count];
        lli left_over = k-total;
        if(left_over>=0) {
            int ind = lower_bound(all(b), left_over) - b.begin();
            if(ind==b.size() or b[ind]>left_over)
                --ind;
                ans = max(ans, count+ind);
        }

        total = b[count];
        left_over = k-total;
        if(left_over>=0) {
            int ind = lower_bound(all(a), left_over) - a.begin();
            if(ind==a.size() or a[ind]>left_over)
                --ind;
            ans = max(ans, count+ind);
        }
    }

    cout << ans << endl;
}