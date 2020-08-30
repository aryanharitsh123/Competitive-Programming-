#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef long long int lli;
int main() {
  int a,b,n;
  scanf("%d %d", &a,&b);
  scanf("%d", &n);
  double max=1000000;
  
  for(int i=0;i<n;i++){
      int x,y,v;
      scanf("%d %d %d", &x, &y, &v);
      double temp = (sqrt(pow(x - a,2) + pow(y-b, 2)))/v;
      if(temp<max){
          max = temp;
      }
  }
  
  printf("%f", max);



  return 0;
}

