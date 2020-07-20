#include<stdio.h>
typedef long long int lli;

void arrayofOR(int arr[], int n)
{
  int i, sum = 0,j=0;
  int bitwise[n];

  for(i =0;i<n;i++){
    int sum1=0;
    for(j=i;j<n;j++){
      sum1 = (arr[i] | arr[j]);
      arr[i] = sum1;
    }
  }
}

int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int y=0;y<n;y++){
      scanf("%d", &arr[y]);
    }

    arrayofOR(arr , n);

    for(int k=0;k<n;k++){
      printf("%d ", arr[k]);
    }

    printf("\n");
  
  }
  return 0;
}

