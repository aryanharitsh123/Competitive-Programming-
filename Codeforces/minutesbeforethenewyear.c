#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int h,m;
      scanf("%d %d", &h, &m);
      int ans;
      ans = 1440-(60*h+ m);
      printf("%d\n", ans);
  }
  return 0;
}

