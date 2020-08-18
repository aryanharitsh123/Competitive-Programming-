#include<stdio.h>
#include<math.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli n;
      scanf("%lld", &n);
      lli x;
      
      for(int i=2;i<=29;i++){
          lli temp = pow(2, i) - 1;

          if(n%temp==0){
            x = n/temp;
          }
      }

      printf("%lld\n", x);
      
  }
  return 0;
}

