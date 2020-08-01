#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  int flag =0;
  scanf("%d", &testcases);
  while(testcases--){
      int n;
      scanf("%d", &n);
        
      if(n<=30){
         printf("NO\n");
       }
      else if(n ==36 || n==40 || n==44){
          printf("YES\n");
          printf("%d %d %d %d\n",6,10,15,n-31);
      }
      else{
          printf("YES\n");
          printf("%d %d %d %d\n", 6,14,10, n-30);
        }
  }
}

