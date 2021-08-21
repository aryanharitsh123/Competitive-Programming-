#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string a,b;
        cin>>a;
        int len=a.length();
        b+=a[0];
        int k=1,p=0;
        for(int j=1;j<len;j=j+2)
        {
            b+=a[j];
            k++;
            p=k;
        }
      for(int j=0;j<p;j++)
       {
           cout<<b[j];
       }
        cout<<endl;
    }
    return 0;
}

