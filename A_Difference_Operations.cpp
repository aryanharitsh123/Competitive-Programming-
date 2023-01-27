#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 bool flag=true;
 cin>>t;
while (t--)
{ 
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%a[0] ==0)
        {
        flag=true;
        }
        else
        {
            flag=false;
            break;
        }
    }


if(flag==0)
{
    cout <<"NO" << endl;
}
else
{
    cout<<"YES"<< endl;
}
}



 return 0;
 }