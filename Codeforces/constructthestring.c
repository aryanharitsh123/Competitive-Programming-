#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n,a,b;
      scanf("%d %d %d", &n, &a, &b);
      for(int i=0;i<n;++i){
          printf("%c", ('a' + i%b));
      }
      printf("\n");
  }

  return 0;
}

