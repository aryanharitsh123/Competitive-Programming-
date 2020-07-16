#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    int a,b,ans=0;
    scanf("%d %d", &a, &b);
    int t = a%b;
    if(t==0){
      ans = 0;
    }
    else{
      ans = b-t;
    }
    printf("%d\n", ans);
  }
  return 0;
}

