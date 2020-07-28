#include<stdio.h>
typedef long long int lli;
int main() {
  int x;
  scanf("%d", &x);

  if(x>=400 && x<=599)
    printf("8");
  else if(x>=600 && x<=799)
    printf("7");
  else if(x>=800 && x<=999)
    printf("6");
  else if(x>=1000 && x<=1199)
    printf("5");
  else if(x>=1200 && x<=1399)
    printf("4");
  else if(x>=1400 && x<=1599)
    printf("3");
  else if(x>=1600 && x<=1799)
    printf("2");
  else
    printf("1");

  return 0;
}

