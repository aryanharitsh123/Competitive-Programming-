#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;

lli cmpfunc(const void *a, const void *b){
    return ((*(lli*)a -  *(lli*)b));
}

int main(){
  int n,k;
  scanf("%d",&n);
  lli arr[n];

  for(int i=0;i<n;i++){
      scanf("%lld", &arr[i]);
  }
  
  qsort(arr,n,sizeof(lli),cmpfunc);

  scanf("%d", &k);
  
  for(int i=0;i<n;i++){
      lli l,r;
      scanf("%lld %lld", &l, &r);
      lli count = 0;
  }


  return 0;
}

