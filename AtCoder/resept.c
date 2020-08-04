#include<stdio.h>
#define max 10000000;
typedef long long int lli;
int main() {
  lli k,cnt=1,x=7;
  scanf("%lld", &k);
  while(x%k){
      cnt++;
      if(cnt>=1e7)
        break;
      x*=10;
      x+=7;
      x%=k;
  }

  if(x%k==0)
    printf("%d\n",cnt);
  else
    printf("%d\n", -1);
  return 0;
}

