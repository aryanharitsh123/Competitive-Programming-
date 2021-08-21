#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


int solve(){
    int n;
    cin>>n;
    int summ=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        summ+=a[i];
    }
    if(summ<n)
        return 1;
    if(summ==n)
        return 0;
    return summ-n;

}

int main(){
    FAST1;
    FAST2;
    ll t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}
