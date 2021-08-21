#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define llu long long unsigned
#define F first
#define S second
#define pb push_back
long int k=0;
int func(long int n,long int des,long int a,long int b)
{
  if(k==1)
  return 1;
 long int a1,b1;
 cout<<"";
 if(n*a<=des)
a1=n*a;
if(n+b<=des)
b1=n+b;
//cout<<a1<<" "<<b1<<endl;
if(a1==des||b1==des)
{
  if(k==0)
  cout<<"Yes"<<endl;
  k=1;
  return 1;
}
if(a1>des&&b1>des&&a!=1)
return 0;
else
{
  if(a!=1)
  func(a1,des,a,b);
  func(b1,des,a,b);
}
return 0;
}
void solve()
{
   long int n,a,b,a1=1,b1,c;
   cin>>n>>a>>b;
   c=func(1,n,a,b);
   if(k!=1)
   cout<<"No"<<endl;

}
int main()
{
  long int t,n;
  cin>>t;
  while(t--)
  {
    k=0;
     solve();
  }
}