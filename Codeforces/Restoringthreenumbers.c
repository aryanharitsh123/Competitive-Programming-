#include<stdio.h>
typedef long long int lli;

void bubblesort(lli *arr, lli n){
    lli i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
  lli arr[4];
  for(int u=0;u<4;u++){
      scanf("%lld" , &arr[u]);
  }

  bubblesort(arr, 4);

  lli  max= arr[3];
  
  for(int k=0;k<3;k++){
    printf("%lld ", abs(max - arr[k]));
  }
}

