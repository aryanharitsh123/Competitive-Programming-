#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n,x;
       cin>>n>>x;
       string s;
       cin>>s;
       vector<lli> a;
       if(s[0]=='0')
       a.push_back(0);
       for(lli i=0;i<n;i++)
       {
           if(s[i]=='1')
           {
               a.push_back(i);
           }
       }
       if(s[n-1]=='0')
       a.push_back(n-1);

       lli count=0,c=0;
       for(lli i=1;i<a.size();i++)
       {
           lli diff=a[i]-a[i-1];

           if((diff+1)%x==0 && c==0){
            count=count+((diff+1)/x);
            c++;
           }
           else{
           count=count+(diff/x);
           }
       }
       cout<<count<<endl;
   }

    return 0;
}