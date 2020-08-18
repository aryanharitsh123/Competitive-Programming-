#include<stdio.h>
#include<string.h>
#define max(a,b) (((a) > (b))? (a):(b))
typedef long long int lli;
int main() {
  lli n;
  scanf("%lld", &n);

  if(n>0){
      printf("%lld", n);
  }

  else if(n<0){
    lli a=0;
    lli b=0;
    
    a = n/10;
    b = n/100 * 10 + n%10;
    printf("%lld", max(a,b));

  }
  return 0;
}

