#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i=1,z=0;
    cin>>a;
    cin>>b;
    cin>>c;
    bool flag = true;
    for(int x=0;x<=c/a;x++){
        int k=c-x*a;
        if(k%b==0){
            flag=1;
            break;
        }
    }
    if(flag) cout << "Yes";
    else cout << "No";

    return 0;
}