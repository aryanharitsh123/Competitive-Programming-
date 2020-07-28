#include<stdio.h>
#include<math.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  int amount = 1000;
  int i,j,profit=0;

  for(int k=0;k<n;k++){
    scanf("%d", &arr[k]);
  }
  
  for(i=0;i<n;){
    for(j=0;j<n-1;j++){
      if(arr[j]>arr[j+1]){
        profit = ceil(amount/arr[j]);
        amount = amount + profit;
      }
      else{
        i=j;
      }
    }
  }

  printf("%d", amount);

  return 0;
}

