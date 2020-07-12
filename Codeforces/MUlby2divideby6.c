#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    int n,i,cnt=0,flag=0;
    scanf("%d", &n);
    while(n!=1){
      if(n%6==0){
        cnt++;
        n=n/6;
      }
      else if(n%3==0){
        n=n*2;
        cnt++;
      }
      else{
          flag=1;
          break;
      }
  }
      if(flag==0){
        printf("%d\n", cnt);
      }
      else{
          printf("-1\n");
      }
  }
  return 0;
}

