#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void *a, const void *b){
    return(*(int*)a - *(int*)b);
}
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n;
      scanf("%d", &n);
      int arr[n];
      int flag=0;

      for(int i=0;i<n;i++){
          scanf("%d", &arr[i]);
      }

      qsort(arr,n,sizeof(int),cmpfunc);

      for(int i=1;i<n;i++){
          if((arr[i] - arr[i-1]) >1){
            flag =1;
            break;
          }
      }
      
      if(flag==1)
        printf("NO\n");
      else{
          printf("YES\n");
      }
      
  }
}

