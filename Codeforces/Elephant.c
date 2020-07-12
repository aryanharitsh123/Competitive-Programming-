#include<stdio.h>
typedef long long int lli;
int main() {
  int n,count=0,ans =0;
  scanf("%d", &n);
  
  if(n%5==0){
    ans = n/5;
  }
  else{
      ans = n/5  + 1;
  }

  printf("%d\n", ans);
  return 0;
}

