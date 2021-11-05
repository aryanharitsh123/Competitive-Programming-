#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   int test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli n;
       cin>>n;
       lli s[n];
       lli count=0;
       for(lli i=0;i<n;i++)
       {
           cin>>s[i];
       }
       lli play=0,frnd=1;
    //    for(lli i=1;i<n;)
    //    {
    //    if(frnd>play)
    //    {
    //        frnd=0;play=1;
    //        if(s[i]==1 && s[i+1]==0)
    //        {
    //            count++;
    //            i=i+2;
    //        }
    //        else if(s[i]==0 && s[i+1]==1)
    //        {
    //            i++;
    //        }
    //        else if(s[i]==1 && s[i+1]==1)
    //        {
    //            count++;
    //            i++;
    //        }
    //        else if(s[i]==0 && s[i+1]==0)
    //        {
    //            i=i+2;
    //        }
    //    }
    //    else
    //    {
    //        frnd=1;play=0;
    //        if(s[i]==1 && s[i+1]==0)
    //        {
    //           i++;
    //        }
    //        else if(s[i]==0 && s[i+1]==1)
    //        {
    //           i=i+2;
    //        }
    //        else if(s[i]==1 && s[i+1]==1)
    //        {
    //            i=i+2;
    //        }
    //        else if(s[i]==0 && s[i+1]==0)
    //        {
    //            i++;
    //        }
    //    }
    //    }
       if(s[0]==1){count++;}
       cout<<count<<endl;


   }

    return 0;
}