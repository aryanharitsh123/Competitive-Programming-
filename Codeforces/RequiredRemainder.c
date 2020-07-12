#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    lli x,y,n,i,ans=0,temp=0;
    scanf("%lld %lld %lld", &x,&y,&n);
    int rem = n%x;
    if(rem>=y){
      ans = n-(rem-y);
    }
    else{
        ans = n-x+y-rem;
    }
    
    printf("%lld", ans);
  }
  return 0;
}

