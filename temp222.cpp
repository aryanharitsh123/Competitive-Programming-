#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int e=0;e<t;e++)
    {
        int n,m,q,count=0,w=0,z=0;
        cin>>n; cin>>m; cin>>q;
        int arr[10001];
        for(int i=0;i<=10000;i++)
        {
            arr[i]=0;
        }
        for(int i=0;i<q;i++)
        {
            int c;
            char ch;
            cin>>ch; cin>>c;
            if(ch=='+')
            {
                count=count+1;
                if(count>m)
                {
                    z++;
                }
                arr[c]++;
            }

            if(ch=='-')
            {
                count=count-1;
                if(arr[c]!=1)
                {
                    w++;
                   // cout<<c<<endl;
                  // cout<<arr[c]<<endl;
                }
            }
        }
      //  cout<<w;
      //  cout<<z;
        if(w==0 && z==0)
        {
             cout<<"Consistent"<<endl;
        }
        else
        {
            cout<<"Inconsistent"<<endl;
        }
    }
    return 0;
}