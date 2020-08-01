#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n;
      int sum=0;
      int count =0;
      scanf("%d", &n);
      int arr[n];
      int counteven=0;
      for(int i=0;i<n;i++){
          scanf("%d", &arr[i]);
      }

      for(int j=0;j<n;j++){
          if(arr[j]%2==1){
              count++;
          }
      }
      for(int p=0;p<n;p++){
          if(arr[p]%2==0){
            counteven++;
          }
      }

      for(int x=0;x<n;x++){
          sum = sum + arr[x];
      }

     if(sum%2==1){
        printf("YES\n");
     }
     else if(n%2==0 && count>=1 && counteven>=1){
        printf("YES\n");
     }
     else if(n%2==1 && count>=1){
        printf("YES\n");
     }
     else{
        printf("NO\n");
     }
  }
  return 0;
}

