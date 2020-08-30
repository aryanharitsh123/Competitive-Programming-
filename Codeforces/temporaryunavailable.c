#include<stdio.h>
#include <stdio.h>
typedef long long int lli;

#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)>(b))?(b):(a))
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli a,b,c,r;
      scanf("%lld %lld %lld %lld", &a, &b, &c, &r);
      lli L = c-r;
      lli R = c+r;
      lli st = max(L,min(a,b));
      lli ed = min(R,max(a,b));

      lli ans = abs(b-a) - max(0,ed-st);
      
      printf("%lld\n", ans);
  }
  return 0;
}

