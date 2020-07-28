#include<stdio.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  int sum = 0;
  for(int x=0;x<n;x++){
    scanf("%d", &arr[x]);
  }
  int min= 0;

  for(int i=0;i<n;i++){
    sum = sum + arr[i];
    if(sum<min){
      min = sum;
    }
  }

  printf("%d", abs(min));

  return 0;
}

