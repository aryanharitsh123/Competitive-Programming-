#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;

int cmpfunc (const void * a, const void * b){
  return(*(lli*)a - *(lli*)b);
}

int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n;
      scanf("%d", &n);
      lli arr[n];

      for(lli x=0;x<n;x++){
          scanf("%lld", &arr[x]);
      }

      qsort(arr,n, sizeof(lli), cmpfunc);
      
      int count =0;

      for(int i=0;i<n;i++){
          while(i<n-1 && arr[i] ==arr[i+1])
            i++;
          count++;
      }

      /*for(int a=0;a<n;a++){
          printf("%d ", arr[a]);
      }
      printf("\n");*/

      printf("%d\n", count);
  }
  return 0;
}

