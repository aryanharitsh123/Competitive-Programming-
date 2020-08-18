#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;

int cmpfunc(const void *a, const void *b){
    return(*(int*)a - *(int*)b);
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  int count=1;
  for(int i=0;i<n;i++){
      scanf("%d\n", &arr[i]);
  }
  
  qsort(arr,n,sizeof(int),cmpfunc);
  
  for(int i=0;i<n-1;i++){
      if(arr[i] != arr[i+1]){
          count++;
      }
  }

  printf("%d", count);

  return 0;
}

