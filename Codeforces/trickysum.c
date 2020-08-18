#include<stdio.h>
typedef long long int lli;
int main() {
  int t;
  lli n,sum,sum2,num;
  scanf("%d", &t);
  for(int i=0;i<t;i++){
      scanf("%lld", n);
      num =1;
      sum2=0;
      sum = n* (n+1)/2;
      while(num<n){
          sum2 += num;
          num *=2;
      }

      printf("%lld\n",sum - sum2 * 2);
  }
  return 0;
}

