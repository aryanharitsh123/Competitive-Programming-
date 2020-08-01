#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;

int cmpfunc (const void * a, const void *b){
    return (*(int*) a - *(int*) b);
}

int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n,temp=0;
      scanf("%d", &n);
      int arr[n];

      for(int p=0;p<n;p++){
          scanf("%d", &arr[p]);
      }
      
      qsort(arr, n , sizeof(int), cmpfunc);
      int min =9999;

      for(int i=n-1;i>=1;i--){
          for(int j=n-2;j>=0;j--){
            if(i !=j){
              temp = abs(arr[i]-arr[j]);
            }
              //printf("%d ", temp);
                  if(temp<min){
                      min = temp;
                  }
              }
          }

      printf("%d\n", min);
    }
  
  return 0;
}

