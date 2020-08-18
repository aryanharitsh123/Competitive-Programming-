#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli n;
      scanf("%lld", &n);
      printf("%lld\n", n);
  }
  return 0;
}

