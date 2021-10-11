#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        lli n,x,k=0,p=0;
        cin>>n;    cin>>x;
        lli a[n],arr[2*n+1];
        for(lli i=0;i<n;i++)
        {
            cin>>a[i];
            arr[k]=a[i];
            k++;
            p=k;
        }
        for(lli i=0;i<n;i++)
        {
            if(x!=0){
            arr[k]=a[i]^x;
            k++;
            p=k;
            }
        }
        lli q=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+q);
        lli max_count = 1, res = arr[0], count = 1,ini=0,fn=0;
    for (int i = 1; i < p; i++) {
        if (arr[i]==arr[i-1])
            count++;
        else {
            if (count>max_count) {
                max_count=count;
                res=arr[i - 1];
            }
            count=1;
        }
    }
    if (count > max_count)
    {
        max_count = count;
        res = arr[p-1];
    }
   // cout<<res<<endl;
   for(lli i=0;i<n;i++)
   {
       if(a[i]==res)
       {
           ini++;
       }
   }
   for(lli i=0;i<p;i++)
   {
       if(arr[i]==res)
       {
           fn++;
       }
   }
   //cout<<"res"<<res<<endl;
   // cout<<"ini"<<ini<<endl;
   //  cout<<"fii"<<fn<<endl;
   cout<<fn<<" "<<fn-ini<<endl;
    }
    return 0;
}