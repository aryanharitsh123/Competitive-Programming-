#include<stdio.h>
typedef long long int lli;

int gcd(int a, int b){
  if(a==0 || b==0){
      return 0;
  }
  else{
    for(int i=1;i<=a && i<=b;++i){
        if(a%i==0 && b%i==0)
          return i;
    }
  }
}

int main() {
  int a,b,n;
  scanf("%d %d %d\n", &a, &b, &n);
  int count =0;

  while(1){
      if(count%2==0){
          int temp1=gcd(a,n);
          if(temp1<=n){
              n = n-temp1;
              count++;
          }
          else{
              break;
          }
        }
      if(count%2==1){
          int temp2=gcd(n,b);
          if(temp2<=n){
              n=n-temp2;
              count++;
          }
          else{
            break;
          }
      }
  }

  if(count%2==0){
      printf("%d\n", 0);
  }
  else{
    printf("%d\n", 1);
  }

  return 0;
}

