#include<stdio.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  int max=0;
  int sum=0;
  for(int x=0;x<n;x++){
    scanf("%d", &arr[x]);
  }
  
  for(int y=0;y<n;y++){
      if(arr[y]>max){
          max = arr[y];
      }
  }
  
  for(int i=0;i<n;i++){
    sum = abs(arr[i] - max) + sum;
  }

  printf("%d", sum);

  return 0;
}

