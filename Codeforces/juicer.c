#include<stdio.h>
#include<math.h>
typedef long long int lli;
int main(){
  int n,b,d;
  scanf("%d %d %d", &n, &b, &d);
  int arr[n];
  int ans=0;
  
  for(int i=0;i<n;i++){
      scanf("%d", &arr[i]);
  }

  for(int i=0;i<n;i++){
      if(arr[i]<=b){
          ans = ans + arr[i];
      }
  }

  printf("%d\n", floor(ans/d));

  return 0;
}

