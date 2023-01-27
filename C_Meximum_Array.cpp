#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <functional>
 
#define N 52
#define LL long long
#define Module 1000000007
 
using namespace std;
 
int n, k;
LL x[N], ans, f[N][N];
 
int main() {
    while (~scanf("%d%d", &n, &k)) {
        LL tmp = 0;
        for (int i=1;i<=n;i++) {
            int y; scanf("%d", &y);
            x[i] = y;
            tmp ^= y;
        }
        ans = 0;
        if (tmp == k) ans ++;
        for (int i=31;i>=0;i--) {
            sort(x+1, x+n+1, greater<int>());
            int cnt = n, p = 1<<i;
            while (cnt>0 && !(x[cnt] & p)) cnt --;
            if (k&p && cnt==0) break;
            if (!cnt) continue;
             
            LL pans = 1;
            for (int i=cnt+1;i<=n;i++)
                (pans *= x[i]+1) %= Module;
            memset(f, 0, sizeof(f));
            f[0][0] = pans;
            for (int i=0;i<cnt;i++)
                for (int j=0;j<=i;j++) {
                    if (i==j) (f[i+1][j] += f[i][j]) %= Module;
                    else      (f[i+1][j] += f[i][j] * p) %= Module;
                    (f[i+1][j+1] += f[i][j] * (x[i+1]-p+1)) %= Module;
                }
             
            bool c = k&p;
            for (int i=c;i<cnt;i+=2)
                (ans += f[cnt][i]) %= Module;
             
            if ((cnt&1) != c) break;
            for (int i=1;i<=cnt;i++) x[i] -= p;
        }
        printf("%d\n", (int)ans);
    }
    return 0;
}