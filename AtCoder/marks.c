#include<stdio.h>
typedef long long int lli;
int main() {
  lli n,k;
  scanf("%d %d", &n, &k);
  lli arr[n];
  lli temp = 0;
  int flag=0;

  for(lli k=0;k<n;k++){
    scanf("%ld", &arr[k]);
  }
  lli ans=0;
  for(lli i=0;i<n-k;i++){
    if(arr[i]<arr[i+k]){
      printf("Yes\n");
    }
    else{
      printf("No\n");
    }
  }
  return 0;
}


