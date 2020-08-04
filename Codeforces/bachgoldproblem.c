#include<stdio.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);

  if(n%2==0){
      printf("%d\n", n/2);
      while(n!=0){
          printf("%d ", 2);
          n = n-2;
      }
  }

  else if(n%2==1){
      printf("%d\n", ((n-3)/2) +1);
      n=n-3;
      printf("%d ", 3);
      while(n!=0){
          printf("%d ", 2);
          n=n-2;
      }
  }

  return 0;
}

