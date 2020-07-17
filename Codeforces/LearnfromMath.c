#include<stdio.h>
typedef long long int lli;
int main() {
  lli n;
  scanf("%ld", &n);

  if(n%2==0){
    printf("%ld %ld", 4, n-4);
  }
  else{
    printf("%ld %ld", 9 , n-9);
  }
  return 0;
}

