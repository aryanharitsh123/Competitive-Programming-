#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d",&testcases);
  while(testcases--){
      lli n,count=0;
      scanf("%lld", &n);
      lli z=0;
      while(n>0){
          z=z+n/5;
          n=n/5;
      }
      printf("%lld\n", z);

  }
}

