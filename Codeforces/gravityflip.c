#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void *a, const void *b){
    return( *(int*)a - *(int*)b );
}


typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for(int i=0;i<n;i++){
      scanf("%d", &arr[i]);
  }

  qsort(arr,n,sizeof(int),cmpfunc);

  for(int i=0;i<n;i++){
      printf("%d ", arr[i]);
  }

}

