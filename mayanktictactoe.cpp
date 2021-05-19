#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long t,i;
    int j,k,owins=0,xwins=0;
    int count=0,cntx=0,cnto=0;
    cin>>t;
    char a[3][3];
    for(i=0;i<t;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                cin>>a[j][k];
                if(a[j][k]=='_')
                {
                    count++;
                }
                 if(a[j][k]=='X')
                {
                    cntx++;
                }
                 if(a[j][k]=='O')
                {
                    cnto++;
                }
            }
        }

        if(a[0][0]=='X'&& a[1][0]=='X' && a[2][0]=='X')
        {
            xwins=1;
        }
        if(a[0][1]=='X'&& a[1][1]=='X' && a[2][1]=='X')
        {
            xwins=1;
        }
        if(a[0][2]=='X'&& a[1][2]=='X' && a[2][2]=='X')
        {
            xwins=1;
        }
        if(a[0][0]=='X'&& a[0][1]=='X' && a[0][2]=='X')
        {
            xwins=1;
        }
        if(a[1][0]=='X'&& a[1][1]=='X' && a[1][2]=='X')
        {
            xwins=1;
        }
        if(a[2][0]=='X'&& a[2][1]=='X' && a[2][2]=='X')
        {
            xwins=1;
        }
        if(a[0][0]=='X'&& a[1][1]=='X' && a[2][2]=='X'){
          xwins = 1;
        }
        if(a[0][2]=='X'&& a[1][1]=='X' && a[2][0]=='X'){
          xwins = 1;
        }


        if(a[0][0]=='O'&& a[1][0]=='O' && a[2][0]=='O')
        {
            owins=1;
        }
        if(a[0][1]=='O'&& a[1][1]=='O' && a[2][1]=='O')
        {
            owins=1;
        }
        if(a[0][2]=='O'&& a[1][2]=='O' && a[2][2]=='O')
        {
            owins=1;
        }
        if(a[0][0]=='O'&& a[0][1]=='O' && a[0][2]=='O')
        {
            owins=1;
        }
        if(a[1][0]=='O'&& a[1][1]=='O' && a[1][2]=='O')
        {
            owins=1;
        }
        if(a[2][0]=='O'&& a[2][1]=='O' && a[2][2]=='O')
        {
            owins=1;
        }
        if(a[0][0]=='O'&& a[1][1]=='O' && a[2][2]=='O'){
          owins = 1;
        }
        if(a[0][2]=='O'&& a[1][1]=='O' && a[2][0]=='O'){
          owins = 1;
        }

        if ((xwins == 1 and owins == 1) or ((cntx - cnto) < 0) or (cntx - cnto) > 1)
            cout << 3 << "\n";
        else if (cntx == 0 and cnto == 0 and count == 9)
            cout << 2 << "\n";
        else if (xwins == 1 and owins == 0 and cntx > cnto)
            cout << 1 << "\n";
        else if (xwins == 0 and owins == 1 and cntx == cnto)
            cout << 1 << "\n";
        else if (xwins == 0 and owins == 0 and count == 0)
            cout << 1 << "\n";
        else if (xwins == 0 and owins == 0 and count >= 0)
            cout << 2 << "\n";
        else
            cout << 3 << "\n";


        owins=0,xwins=0;
        count=0,cntx=0,cnto=0;

    }
        return 0;
    }