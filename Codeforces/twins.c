#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void *a , const void *b){
     return (*(int*)a - *(int*)b); 
}
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for(int k=0;k<n;k++){
      scanf("%d\n", &arr[k]);
  }

  qsort(arr,n,sizeof(int), cmpfunc);
  int sum = 0;
  for(int q=0;q<n;q++){
      sum = sum+arr[q];
  }
  int temp=0;
  int ans=0;
  for(int i=n-1;i>=0;i--){
    temp = temp +  arr[i];
    ans++;
    if(temp > sum - temp){
        printf("%d\n", ans);
        break;
    }
    
  }
  return 0;
}

