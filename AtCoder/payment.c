#include<stdio.h>
typedef long long int lli;
int main() {
  int n,ans;
  int i=1;
  scanf("%d", &n);
  while(1){
      if((1000*i)>=n){
          ans = (1000*i) - n;
          break;
      }
      else{
        i++;
      }
  }
  
  printf("%d\n", ans);

  return 0;
}

