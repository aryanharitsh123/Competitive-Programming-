#include<stdio.h>
typedef long long int lli;
int main() {
  int n,flag=0;
  scanf("%d", &n);
  int arr[n];

  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
    if(arr[i]==1){
      flag=1;
      printf("HARD\n");
      break;
    }
  }

  if(flag==0){
    printf("EASY\n");
  }
  return 0;
}

