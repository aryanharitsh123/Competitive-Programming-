#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli arr[4];
      lli max =0;
      for(lli x=0;x<4;x++){
          scanf("%lld", &arr[x]);
      }
      lli n = arr[3];
      
      if(arr[0]> arr[1]){
          if(arr[0]>arr[2]){
              max = arr[0];
          }
          else{
              max = arr[2];
          }
      }
      else if(arr[1]>arr[2]){
          max = arr[1];
      }
      else{
          max = arr[2];
      }

      int sum = 0;

      sum = (max-arr[0]) + (max - arr[1]) + (max - arr[2]);
      lli temp = n-sum;
      
      if(temp%3 ==0 && temp>=0){
          printf("YES\n");
      }
      else{
        printf("NO\n");
      }
  
  }
  return 0;
}

