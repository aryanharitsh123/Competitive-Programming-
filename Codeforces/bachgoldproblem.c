#include<stdio.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  if(n%2==0){
      printf("%d\n", n/2);
      for(int i=0;i<n/2;i++){
          printf("%d ", 2);
      }
  }
  if(n%2==1){
      n=n-3;
      printf("%d\n", n/2);
      printf("%d ", 3);
      for(int j=0;j<n/2;j++){
          printf("%d ", 2);
      }
  }
  return 0;
}

