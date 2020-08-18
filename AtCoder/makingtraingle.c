#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  lli arr[n];
  int count=0;
  for(int i=0;i<n;i++){
      scanf("%lld", &arr[i]);
  }
  int x=0;
  while(1){
    for(int j=1;j<n-1;j++){
        printf("%d %d %d\n", arr[x], arr[j],arr[j+1]);
        if(arr[x] +arr[j]>arr[j+1] && arr[x]+arr[j+1]>arr[j] && arr[j+1] + arr[j]>arr[x]){
          count++;
        }
    }
    x++;
    if(x == n-2)
      break;
    if(n<3)
      break;

  }
  printf("%d", count);
  return 0;
}

