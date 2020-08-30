#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;
#define min(a,b) (((a)>(b))?(b):(a))
int cmpfunc(const void *a, const void *b){
    return(*(int*)a - *(int*)b);
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for(int i=0;i<n;i++){
      scanf("%d", &arr[i]);
  }

  qsort(arr,n,sizeof(int),cmpfunc);

  printf("%d", min((arr[n-2] - arr[0]),(arr[n-1] - arr[1])));



}
