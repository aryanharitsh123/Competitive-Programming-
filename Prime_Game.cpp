#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define lli long long int

int vec[MAX];
void seive(){
  bool prime[MAX];
  memset(prime, true, sizeof(prime));

  for(int  i=2;i*i<MAX;i++){
    if(prime[i]==true){
      for(int j=i*i;j<MAX;j+=i){
        prime[j] = false;
      }
    }
  }
  vec[0]=vec[1]=0;

  for(int i=2;i<=MAX;i++){
    vec[i]=vec[i-1];
    if(prime[i]==true) vec[i]++;
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  seive();
  int testcases;
  cin >> testcases;
  while(testcases--){
    lli x,y;
    cin >> x >> y;
    if(vec[x]>y){
      cout << "Divyam\n";
    }
    else{
      cout << "Chef\n";
    }
  }
}
