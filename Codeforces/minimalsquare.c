#include<stdio.h>
#define max(a,b) (((a) < (b)) ? (b) : (a))
#define min(a,b) (((a) < (b)) ? (a) : (b))
typedef long long int lli;
int main() {
   int testcases;
   scanf("%d", &testcases);
   while(testcases--){
      int a,b;
      scanf("%d %d", &a, &b);
      lli ans = (min(max(2*b,a),max(2*a,b)));
      printf("%lld\n", ans*ans);
   }
  return 0;
}

