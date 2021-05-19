#include<bits/stdc++.h>
using namespace std;

int main() {

ios_base::sync_with_stdio(false);
cin.tie(NULL);

int MX = 4000005;
int p[MX];
int temp[MX];

for(int i=0;i<MX;i++){
  p[i]=i;
  temp[i]=0;
}

for(int a = 2; a<MX;a++){
  if(p[a]==a){
    p[a] = a-1;
    for(int k = 2*a;k<MX;k+=a){
      p[k] = (p[k]/a)*(a-1);
    }
  }
}

for(int q = 1;q<MX;q++){
  temp[q] += q-1;
  for(int m=2*q;m<MX;m+=q){
    temp[m]+=q*((1+p[m/q])/2);
  }
}

  int testcases=1;
  cin >> testcases;
  for(int testcase=0; testcase<testcases; testcase++) {
    int y;
    cin >> y;
    cout << temp[4*y+1] << endl;
  }
}