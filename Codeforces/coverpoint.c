#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max(a,b) (((a)>(b))?(a):(b))
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  lli max = 0;
  for(int i=0;i<n;i++){
      lli x,y,temp=0;
      scanf("%lld %lld", &x, &y);
      temp = x+y;
      if(temp>max){
          max = temp;
      }
  }
  
  printf("%lld", max);
}

