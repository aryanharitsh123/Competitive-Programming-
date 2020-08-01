#include<stdio.h>
#include<math.h>
typedef long long int lli;
int main() {
  int n,k;
  scanf("%d %d", &n, &k);
  int arr[n];

  for(int p=0;p<n;p++){
      scanf("%d", &arr[p]);
  }

  int count=0;

  for(int i=0;i<n;i++){
    if(arr[i]+k <= 5){
        count++;
    }
  }
  
  int ans =floor( count/3);

  printf("%d\n", ans);

  return 0;
}

