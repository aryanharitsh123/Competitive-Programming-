#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;

lli cmpfunc(const void *a, const void *b){
    return( *(lli*)a - *(lli*)b);
}
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n;
      scanf("%d", &n);
      lli arr[n];

      for(int i=0;i<n;i++){
          scanf("%d", &arr[i]);
      }
      
      qsort(arr, n, sizeof(lli), cmpfunc);
      if(n>=4){
        if(arr[n-1] + arr[n-4] > arr[n-2] + arr[n-3]){
          printf("first\n");
        }
        else if(arr[n-1] + arr[n-4] < arr[n-2] + arr[n-3])
          printf("second\n");
        
        else
          printf("draw");
      }

      if(n==3){
          printf("\nsecond\n");
      }
      if(n==2 || n==1){
        printf("first\n");
      }

  }
  return 0;
}

