#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef long long int lli;
int main() {
  lli n,m,r,mn,mx;
  scanf("%lld", &n);
  r =n%7;
  m = n/7;
  mx=mn=m*2;
  if(r==6)
    mn++;
  if(r<=2)
    mx+=r;
  else{
      mx+=2;
  }

  printf("%lld %lld", mn , mx);
}

