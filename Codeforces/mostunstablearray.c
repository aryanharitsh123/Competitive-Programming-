#include<stdio.h>
#define min(a,b) (((a)<(b))?(a):(b))
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli m,n;
      scanf("%lld %lld", &m, &n);
      lli ans = min( 2 , n-1);      
      printf("%lld\n", ans*m);
  }
  return 0;
}

