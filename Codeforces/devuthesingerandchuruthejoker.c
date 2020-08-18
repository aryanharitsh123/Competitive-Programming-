#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef long long int lli;
int main() {
  int  n,d;
  scanf("%d %d", &n, &d);
  int arr[n];
  
  for(int k=0;k<n;k++){
      scanf("%d", &arr[k]);
  }
  int time = 0;
  for(int i=0;i<n-1;i++){
      time = time + arr[i] + 10; 
  }
  printf("%d\n", time);
  if(time<=d){
      printf("%d", floor((d-time)/5));
  }
  else if(time >d){
      printf("%d", -1);
  }
  return 0;
}

