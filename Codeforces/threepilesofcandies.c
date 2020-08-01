#include<stdio.h>
#include<math.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    lli sum=0;
    lli arr[3];
    
    for(int i=0;i<3;i++){ 
    scanf("%lld",&arr[i]);
    }
    
    for(int j=0;j<3;j++){
        sum = sum+arr[j];
    }
    
    printf("%lld\n", sum/2);
  }
  return 0;
}

