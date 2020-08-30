#include<stdio.h>
typedef long long int lli;
#define max(a,b) (((a)>(b))?(a):(b))
int main() {
  int n,sum=0,ans=0;
  scanf("%d", &n);
  int arr[n];
  
  for(int i=0;i<n;i++){
      scanf("%d", &arr[i]);
      sum = sum+arr[i];
  }
  
  for(int i=0;i<n;i++){
      if((sum - arr[i])%2==0){
          ans++;
      }
  }

  printf("%d", ans);


}

