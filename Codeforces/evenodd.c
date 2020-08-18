#include<stdio.h>
typedef long long int lli;
int main() {
  lli n,k;
  scanf("%lld %lld", &n, &k);

  if(k<=(n+1)/2)
    printf("%lld\n", (2*k)-1);

  else
    printf("%lld\n", 2*(k - (n+1)/2));
  return 0;
}

