#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli n,k,temp=0;
      scanf("%lld %lld", &n,&k);
      
      if(n%2==0){
          printf("%lld\n", n + (k*2));
      }
      else{
          for(lli i=2;i<=n;i++){
              if(n%i==0){
                  temp = i;
                  break;
              }
          }

          printf("%lld\n", (n+temp) + ((2*(k-1))));
          //printf("%d\n", temp);
      }
  }
  return 0;
}

