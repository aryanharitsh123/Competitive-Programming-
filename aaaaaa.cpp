#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       lli z=0;
       cin>>n;
       lli vector<vector<char>> a;

        for(lli i=0;i<n;i++)
       {
           for(lli j=0;j<n;j++)
           {
               if(a[i][j]==1 && j!=n-1 && i!=n-1)
               {
                   if(a[i][j+1]==1 || a[i+1][j]==1)
                   {
                       continue;
                   }
                   else
                   {
                       z++;
                   }
               }
           }
       }
       if(z==0)
       {
          cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }
}