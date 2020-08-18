#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;
lli cmpfunc(const void *a, const void *b){
    return (*(lli*)a - *(lli*)b);
}

int main() {
  int n;
  int sum=0;
  scanf("%d", &n);
  lli arr[n];
  lli countofodd=0,countofeven=0;
  
  for(int i=0;i<n;i++){
      scanf("%lld", &arr[i]);
  }

  for(int j=0;j<n;j++){
      if(arr[j]%2==0)
        countofeven++;
      else
        countofodd++;
  }
  
  qsort(arr, n, sizeof(lli), cmpfunc);

  if(countofodd%2==0){
      for(int i=0;i<n;i++)
        sum = sum + arr[i];
  }

  else if(countofeven%2==0 && countofodd%2==1){
      for(int i=n-1;i>=0;i--){
          if(arr[i]%2==1){
              sum = sum + arr[i];
              countofodd--;
          }
          else{
              sum = sum + arr[i];
          }
      }
  }

  else if(countofeven%2==1 && countofodd%2==0){
      for(int i=n-1;i>=0;i--){
          if(arr[i]%2==0){
              sum = sum + arr[i];
              countofeven--;
          }
          else{
              sum = sum+arr[i];
          }
      }
  }

  printf("%d", sum);
  return 0;
}

