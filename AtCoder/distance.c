#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long int lli;
int main() {
  int n,d;
  scanf("%d %d", &n, &d);
  int count=0;
  while(n--){
      int a,b,dis=0; 
      scanf("%d %d", &a, &b);
      dis = (sqrt((a*a) + (b*b)));
      if(dis<=d){
          count++;
      }
  }

  printf("%d\n", count);
  return 0;
}

