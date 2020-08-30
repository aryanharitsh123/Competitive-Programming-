#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef long long int lli;
int main() {
  int d,t,s;
  scanf("%d %d %d", &d, &t, &s);
  double l = (double)d/s;
  if(l<=t){
      printf("Yes\n");
      //printf("%f",l);
  }
  else{
      printf("No\n");
      //printf("%f", l);
  }
}

