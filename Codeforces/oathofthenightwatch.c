#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;

lli cmpfunc(const void *a, const void *b){
    return(*(lli*)a - *(lli*)b);
}

int main() {
  int n;
  scanf("%d", &n);
  lli arr[n];

  for(int i=0;i<n;i++){
      scanf("%lld", &arr[i]);
  }
  
  qsort(arr,n,sizeof(lli),cmpfunc);
  lli ans=0;
  for(int i=1;i<n-1;i++){
      if(arr[i]>arr[0] && arr[i]<arr[n-1])
        ans++;
  }

  printf("%lld", ans);


  return 0;
}

