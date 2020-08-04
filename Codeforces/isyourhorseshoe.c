#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;
int cmpfunc(const void *a, const void *b){
    return (*(lli*)a - *(lli*)b);
}
int main() {
  lli arr[4];
  
  for(int x=0;x<4;x++){
      scanf("%lld", &arr[x]);
  }
  
  qsort(arr,4,sizeof(lli), cmpfunc);

  int res=0;
  for(int i=0;i<4;i++){
    while(i<4-1 && arr[i]==arr[i+1])
        i++;
    res++;
  }
  //printf("%d\n", res);
  printf("%d\n", 4-res);
  return 0;
}

