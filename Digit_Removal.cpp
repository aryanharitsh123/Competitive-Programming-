#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli test;
    cin>>test;
    for(lli e=0;e<test;e++)
    {
        string n;
        cin>>n;
        lli z=0,p=0;
        char d;
        cin>>d;
        for(lli i=n.length()-1;i>=0;i--)
        {
            if(n[i]==d)
            {
                z++;
                p=i;
            }
        }
       // cout<<p<<endl;
        string cpy;
        if(z==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if(d=='9' && p==0)
            {
                cpy+='1';
                for(lli i=0;i<n.length();i++)
                {
                    cpy+='0';
                }

            }
            else if(d=='9' && p!=0)
            {
                for(lli i=0;i<p-1;i++)
                {
                    cpy+=n[i];
                }
                cpy+=n[p-1]+1;
                for(lli i=p;i<n.length();i++)
                {
                    cpy+='0';
                }
            }
            else if(d=='0')
            {
                for(lli i=0;i<p;i++)
                {
                    cpy+=n[i];
                }
                for(lli i=p;i<n.length();i++)
                {
                    if(n[i]=='0')
                    {
                        cpy+='1';
                    }
                    else if(n[i]=='9')
                    {
                      cpy+='1';
                    }
                    else
                    {
                        cpy+=n[i];
                    }
                }
            }
            else
            {
                for(lli i=0;i<p;i++)
                {
                    cpy+=n[i];
                }
                cpy+=n[p]+1;
                for(lli i=p+1;i<n.length();i++)
                {
                    cpy+='0';
                }
            }
            lli n1=stoll(n);
            lli cpy1=stoll(cpy);
            cout<<cpy1-n1<<endl;
        }
    }
    return 0;
}