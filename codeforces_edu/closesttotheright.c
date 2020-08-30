#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;
int main() {
  int n,k;
  scanf("%d %d", &n, &k);
  lli arr[n];

  for(int i=0;i<n;i++){
      scanf("%lld", &arr[i]);
  }

  for(int i=0;i<k;i++){
      lli x;
      scanf("%lld", &x);
      lli l=-1;
      lli r=n;
      
      while(r > l+1){
          lli mid =(l+r)/2;
          
          if(arr[mid]<x)
            l=mid;
          else
            r = mid;
      }
      printf("%lld\n", r+1);
  }
  return 0;
}

