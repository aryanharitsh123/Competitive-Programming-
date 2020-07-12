#include<stdio.h>
typedef long long int lli;
int main() {
    int n,h,i,count=0;
    scanf("%d %d", &n, &h);
    int arr[n];

    for(int z=0; z<n;z++){
      scanf("%d", &arr[z]);
    }

    for(i=0;i<n;i++){
      if(arr[i] > h){
          count=count + 2;
      }
      else{
          count = count+1;
      }
    }

    printf("%d\n", count);
  return 0;
}

