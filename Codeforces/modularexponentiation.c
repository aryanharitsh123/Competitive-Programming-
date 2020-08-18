#include<stdio.h>
#include<math.h>
typedef long long int lli;
int main() {
  lli n,m;
  scanf("%lld\n", &n);
  scanf("%lld", &m);
  
  if(n>27){
      printf("%lld", m);
  }
  else{
      lli x = pow(2,n);
      x = m%x;
      printf("%lld", x);
  }

}

