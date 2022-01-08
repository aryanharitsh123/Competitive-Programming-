#include<iostream>
#include<cstring>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cmath>
#include<climits>
#define lli long long int
#define GO_FAST ios_base::sync_with_stdio(0);ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;



int main()
{
    //GO_FAST
    lli n;
    cin>>n;
    if(n == 1)
        cout<<4<<"\n";
    else if(n == 2)
        cout<<6<<"\n";
    else
    {
        lli ans = 2;
        lli next = 3;
        lli prev_c = 0;
        lli prev = 2;
        for(int i = 3; i<=n; i++)
        {
            cout<<"i = "<<i<<" ";
            if(i == next)
            {
                cout<<" adding "<<2<<"\n";
                ans += 2;
                if(prev_c < 2)
                {
                    prev_c++;
                    next = i + prev;
                }
                else
                {
                    prev_c = 1;
                    prev++;
                    next = i + prev;
                }
            }
            else
            {
                cout<<" adding "<<4<<"\n";
                ans += 4;
            }
        }

        cout<<4*n - ans<<"\n";
    }

    return 0;
}
