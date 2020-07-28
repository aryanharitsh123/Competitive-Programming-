#include<stdio.h>
typedef long long int lli;
int main() {
  int k,r;
  scanf("%d %d", &k, &r);
  int ans = 0;
  for(int i=1;i<=10;i++){
    if((k*i)%10 == r || (k*i)%10==0){
      ans = i;
      break;
    }
  }
  printf("%d", ans);
  return 0;
}

