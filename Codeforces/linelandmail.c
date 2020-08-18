#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
typedef long long int lli;

#define min(a,b) (((a) > (b))?(a):(b))
#define max(a,b) (((a) > (b))?(b):(a))

int main() {
  int n;
  scanf("%d", &n);
  lli arr[n];
  
  for(int i=0;i<n;i++){
      scanf("%lld", &arr[i]);
  }
  
  printf("%lld %lld\n", abs(arr[0] - arr[1]), abs(arr[0] - arr[n-1]));
  for(int i=1;i<n-1;i++){
    printf("%lld %lld\n",min(abs(arr[i] - arr[i+1]),abs(arr[i-1]- arr[i+1])), max(abs(arr[i]-arr[0]),abs(arr[i]-arr[i-1])));
  }

  return 0;
}

