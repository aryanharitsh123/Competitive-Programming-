#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli x,y;
      scanf("%lld %lld", &x, &y);
      if((x-y)==1){
          printf("NO\n");
      }

      else{
          printf("YES\n");
      }
  }
  return 0;
}

