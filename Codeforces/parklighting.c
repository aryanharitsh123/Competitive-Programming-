#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n,m,ans;
      scanf("%d %d", &n, &m);
      ans = ((n*m)+1)/2;
      printf("%d\n", ans);
  }
  return 0;
}

