#include<stdio.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  int arr[n][n];

  for(int x=0;x<n;x++){
      arr[0][x] = 1;
      arr[x][0] = 1;
  }
  int max = 1;
  for(int i=1;i<n;i++){
      for(int j=1;j<n;j++){
          arr[i][j] = arr[i-1][j] + arr[i][j-1];
          if(arr[i][j]>max){
              max = arr[i][j];
          }
      }
  }

  printf("%d\n", max);

  return 0;
}

