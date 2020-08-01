#include<stdio.h>
typedef long long int lli;
int main() {
  int n,k;
  int ans=0;
  int sum=0;
  scanf("%d %d", &n, &k);
  for(int i=1;i<=n;i++){
    sum = sum + 5*i;
      if(sum>240-k){
          ans =i-1;
          break;
      }
      else if(sum==240-k){
          ans = i;
          break;
      }
      else{
          ans = n;
      }
  }

  printf("%d\n", ans);
  return 0;
}

