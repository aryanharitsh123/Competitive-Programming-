#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,j,k,min,max;
        int strmax=0,strmin=0,count=0,count1=0,sum1=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        min=a[0];
        max=a[0];
        for(k=0;k<n;k++){
        if(a[k]<min)
        {
            min=a[k];
            strmin=k;
        }
       }
        for(k=0;k<n;k++){
        if(a[k]>max)
        {
            max=a[k];
             strmax=k;
        }}
        if(strmax>=strmin)
        {
            count=count+strmax+1;
        }
        else
        {
            count=count+strmin+1;
        }
        if(strmax<=strmin)
        {
            count1=n-strmax;
        }
        else
        {
             count1=n-strmin;
        }
        if(strmax<=strmin)
        {
 
            sum1=strmax+n-strmin+1;
        }
        else
        {
           sum1=strmin+n-strmax+1;
        }
        if(count<=count1 && count<=sum1)
        {
            cout<<count<<endl;
        }
        else if(count1<=count && count1<=sum1)
        {
            cout<<count1<<endl;
        }
        else
        {
            cout<<sum1<<endl;
        }
    }
 
 
    return 0;
}