#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int,vector<int>> mp;
    int a,b;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        mp[i].push_back(a);
        mp[i].push_back(b);
    }

    for(auto x :  mp){
        if( x.second[0] + x.second[1] > 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }



}