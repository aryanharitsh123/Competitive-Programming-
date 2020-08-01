#include<stdio.h>
#include<math.h>

int ceil2(double n){
    int temp = (int)n;
    temp = temp+1;
    return temp;
}

typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n,m;
      int count =0;
      scanf("%d %d", &n, &m);
      
      int ans = floor(n/2) + ceil(m/2);
      int a = floor(n/2);
      int b = ceil2(m/2);
      printf("%d %d\n", a,b);
  }
  return 0;
}

