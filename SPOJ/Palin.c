#include<stdio.h>
typedef long long int lli;

lli reverse(lli n){
  lli rev=0;
  while(n>0){
    rev = (rev*10)+(n%10);
    n=n/10;
  }
  return rev;
}

int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    lli n,rev;
    int flag=0;
    scanf("%ld", &n);
    n=n+1; 
    while(flag==0){
      rev = reverse(n);
      if(rev==n)
        flag=1;
      n++;
    }

    printf("%ld\n", rev);
  }
  
  return 0;
}

