#include<stdio.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  lli arr[n];
  lli ans=0;

  for(int i=0;i<n;i++){
      scanf("%d", &arr[i]);
  }

  for(int i=1;i<n;i++){
    if(abs(arr[i]-arr[0])%2==1)
      ans++;
  }

  printf("%lld", ans);
  return 0;
}

