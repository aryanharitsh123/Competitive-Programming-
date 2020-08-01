#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli n;
      scanf("%lld", &n);

      if(n%2==0){
          printf("%d\n", n/2);
      }
      else{
        printf("%d\n", (n/2)+1);
      }

  }
  return 0;
}

