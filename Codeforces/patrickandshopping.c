#include<stdio.h>
#define min(a,b) (((a)<(b))?(a):(b))
typedef long long int lli;
int main() {
  lli d1,d2,d3;
  scanf("%lld %lld %lld", &d1, &d2, &d3);
  lli dis1,dis2,dis3,dis4;
  dis1=d1+d2+d3;
  dis2=2*(d1+d2);
  dis3=d1+d3+d3+d1;
  dis4=d2+d3+d3+d2;

  printf("%lld\n", min(dis1,min(dis2,min(dis3,dis4))));
  return 0;
}

