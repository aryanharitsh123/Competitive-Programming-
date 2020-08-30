#include<stdio.h>
typedef long long int lli;
int main() {
  int n,x,t;
  scanf("%d %d %d", &n,&x,&t);
  int ans = 0;
  int time=0;
  while(ans<n){
    ans = ans + x;
    time = time + t;
    if(ans>=n){
        break;
    }
  }

  printf("%d", time);
  return 0;
}

