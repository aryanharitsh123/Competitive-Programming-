#include<stdio.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  int count=0;

  for(int k=0;k<n;k++){
    scanf("%d", &arr[k]);
  }
  
  int max = arr[0];
  int min = arr[0];

  for(int p=1;p<n;p++){
    if(arr[p]>max){
        count++;
        max = arr[p];
    }
    else if(arr[p]<min){
        count++;
        min = arr[p];
    }
  }

  printf("%d", count);

  return 0;
}

