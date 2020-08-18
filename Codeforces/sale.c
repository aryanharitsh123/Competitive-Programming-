#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;

int cmpfunc(const void *a, const void *b){
    return(*(int*)a - *(int*)b);
}

int main() {
  int m,n;
  scanf("%d %d", &m, &n);
  int ans=0;
  int arr[m];
  
  for(int i=0;i<m;i++){
      scanf("%d", &arr[i]);
  }
  
  qsort(arr,m,sizeof(int), cmpfunc);
  int x=0;
  while(n--){
    if(arr[x]<0){
        ans = ans+ abs(arr[x]);
        x++;
    }
    else if(arr[x]==0 || arr[x]>0){
        break;
    }
  }

  printf("%d\n", ans);
  return 0;
}

