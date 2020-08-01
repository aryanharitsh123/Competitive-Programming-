#include<stdio.h>
#include<math.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n;
      int sum1=0,sum2=0;
      scanf("%d", &n);
      for(int i=1;i<=(n/2)-1;i++){
        sum1 = sum1 + pow(2 , i);
      }
      
      sum1 = sum1 + pow(2, n);
      for(int j=(n/2);j<=n-1;j++){
          sum2 = sum2 + pow(2 , j);
      }

      printf("%d\n", abs(sum1-sum2));

  }
  return 0;
}

