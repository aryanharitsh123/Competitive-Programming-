#include<stdio.h>
typedef long long int lli;

void bubblesort(int *arr, int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
}
int main() {
  int arr[3];
  
  for(int u=0;u<3;u++){
      scanf("%d", &arr[u]);
  }
  
  bubblesort(arr,  3);
  int initial = arr[1];
  int sum=0;

  sum = abs(arr[0] - arr[1]) + abs(arr[2] - arr[1]); 
  printf("%d", sum);
}

