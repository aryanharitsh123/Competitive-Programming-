#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli a,b,ans;
      scanf("%lld %lld", &a, &b);
      ans = abs(a-b);

      if(a==b){
          printf("%d\n", 0);
      }
      else if(ans%2==0 && b>a){
          printf("%d\n", 2);
      }
      else if(ans%2==0 && b<a){
          printf("%d\n", 1);
      }
      else if(ans %2==1 && b>a){
          printf("%d\n", 1);
      }
      else if(ans%2==1 && b<a){
          printf("%d\n", 2);
      }
  }
  return 0;
}

