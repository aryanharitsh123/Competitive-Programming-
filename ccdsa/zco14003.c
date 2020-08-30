#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int lli;

lli cmpfunc(const void *a, const void *b){
    return (*(lli*)a - *(lli*)b);
}

int main(){
  lli n,ans=0;
  scanf("%lld", &n);
  lli arr[n];

  for(lli i=0;i<n;i++){
      scanf("%lld", &arr[i]);
  }

  qsort(arr,n,sizeof(lli),cmpfunc);

  for(lli i=0;i<n;i++){
      lli temp = arr[i] * (n-i);
      if(temp>ans){
          ans = temp;
      }
  }
  
  printf("%lld", ans);
  return 0;
}

