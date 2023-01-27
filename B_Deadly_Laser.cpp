#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec = {5,3,2,5,1};
  int n = vec.size();
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(vec[i]>vec[j]){
        swap(vec[i],vec[j]);
      }
    }
  }
  for(int i=0;i<n;i++){
    cout << vec[i] << " ";
  }

}