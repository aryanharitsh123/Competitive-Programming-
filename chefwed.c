#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n,k;
      scanf("%d", &n, &k);
      int arr[n];
      int boolean[n];
      int count = 1;
      

      for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

      for(int q=0;q<n;q++){
          boolean[q] = 0;
      }
      int ans = arr[0];
      int temp = arr[0];
      for(int i=1;i<n;i++){
        temp = temp^arr[i];
        printf("%d ", temp);
        if(ans == temp){
            count++;
        }
        else
          ans = temp;

      }

      printf("%d\n", count);
  }
  return 0;
}

/// \n missing only 10 points (partial)
