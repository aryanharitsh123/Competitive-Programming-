#include<bits/stdc++.h>
using namespace std;
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);    
    int t;cin>>t;
    for(;t>0;t--){
        long long a,b,x=0,z=0;
        cin>>a>>b;
        for(long long int i=a;;){
            if(i==1){
                z=1;
                break;
            }
            if(i==0){
                cout<<"YO";
            }
            long long x= lcm(i,b);
            if(x==i*b){
                z=0;
                break;
            }
            i= x/b;
        }
        if(z==1){
            cout<<"YES"<<endl;
        }
        else    cout<<"NO"<<endl;
    }
}