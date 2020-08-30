#include<stdio.h>
typedef long long int lli;
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)>(b))?(b):(a))
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli n,s,t;
      scanf("%lld %lld %lld", &n,&s,&t);
      
      if(n==s && s==t && t==n){
          printf("%d\n", 1);
      }

      else{
          printf("%lld\n", max(n-t,n-s)+1);
      }
  }
  return 0;
}

