#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b){
    if(b==0)
      return a;
    return gcd(b,a%b);
}

typedef long long int lli;
int main() {
  int a,b,n;
  scanf("%d %d %d", &a, &b, &n);
  int count=0;
  while(1){
      int s=0,as=0,temp1,temp2;
      if(count%2==0){
          temp1 = gcd(a,n);
          if(n-temp1>=0){
              n = n-temp1;
              count++;
          }
          else
            break;
      }
      else if(count%2==1){
          temp2 = gcd(b,n);
          if(n-temp2>=0){
              n = n-temp2;
              count++;
          }
          else
            break;
      }
  }

  if(count%2==0){
      printf("%d", 1);
  }
  else if(count%2==1)
    printf("%d", 0);
 
  return 0;
}

