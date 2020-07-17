#include<stdio.h>
#include<math.h>
typedef long long int lli;
int main() {
  lli testcases;
  scanf("%ld", &testcases);
  while(testcases--){
    lli n;
    lli ans =0;
    scanf("%ld", &n);
    
    if(n%2==0){
      ans = n/2 - 1;
    }
    else{
      ans = ceil(n/2);
    }

  printf("%ld\n", ans);
  return 0;
  }
}
