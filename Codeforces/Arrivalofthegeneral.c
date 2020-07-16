#include<stdio.h>
#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (b) : (a))
typedef long long int lli;

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for(int k=0;k<n;k++){
    scanf("%d", &arr[k]);
  }

  

  return 0;
}

int swapsoldiers(int *arr, int n){
  int i,j,k,o,max=0,min=0;

  for(k=0;k<n-1;k++){
    max = (arr[k],arr[k+1]);
    min = (arr[k],arr[k+1]);
  }
}

