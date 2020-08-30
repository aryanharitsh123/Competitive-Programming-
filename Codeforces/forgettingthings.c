#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;
int main() {
  int a,b;
  scanf("%d %d", &a, &b);
  
  if(abs(b-a)>1 && abs(a-b)>1 && a+b!=10){
      printf("%d", -1);
  }
  else{
      if(a!=b && a+b!=10){
          printf("%d %d", a , a+1);
      }
      else if(a==b){
          printf("%d %d", a*11, (a*11)+1);
      }
      else if(a+b==10){
          printf("%d %d", a, a+1);
      }
  }

  return 0;
}

