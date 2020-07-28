#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d",&testcases);
  while(testcases--){
    int n;
    scanf("%d", &n);
    char incoming[n];
    char outgoing[n];
    char ans[n][n];
    
    for(int r=0;r<n;r++){
      scanf("%d", &incoming[r]);
    }

    for(int y=0;y<n;y++){
      scanf("%d", &outgoing[y]);
    }
  



  }
  return 0;
}

