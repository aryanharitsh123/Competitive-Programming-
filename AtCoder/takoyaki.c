#include<stdio.h>
typedef long long int lli;
int main() {
  lli n,x,t;
  scanf("%lld %lld %lld", &n,&x,&t);
  int ans = 0;
  int time=0;
  while(ans<n){
    ans = ans + x;
    time = time + t;
    if(ans>=n){
        break;
    }
  }

  printf("%lld", time);
  return 0;
}
//use long long int instead of normal int due to overflow.
