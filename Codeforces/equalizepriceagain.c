#include<stdio.h>
typedef long long int lli;
void sort(int *arr, int n);
int main() {
 int testcases;
 scanf("%d", &testcases);
 while(testcases--){
  int n, ans=0,temp=0;
  scanf("%d", &n);
  int arr[n];
  
  for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
  }

  sort(arr, n);
  ans = arr[0]*n;
  for(int i=1;i<n;i++){
    temp = arr[i]*n;
    if(temp<=ans){
      ans = temp;
      break;
    }
  }

  printf("%d", ans);

 }
}

void sort(int *arr, int n){
  int i,j,temp=0;
  for(i=0;i<n-1;i++){
    for(j=0;j<n-1;j++){
      if(arr[j]>arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

