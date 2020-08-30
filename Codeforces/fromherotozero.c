#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli n,k,r;
      scanf("%lld %lld", &n,&k);
      lli count =0;
      while(1){
          if(n%k==0){
              n=n/k;
              count++;
          }
          else{
              r = n%k;
              count+=r;
              n-=r;
          }

          if(n==0){
              break;
          }
      }
      printf("%lld\n", count);

  }
}

