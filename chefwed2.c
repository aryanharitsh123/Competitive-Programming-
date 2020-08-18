#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n,k;
      scanf("%d %d", &n, &k);
      int arr[n];
      int boolean[n];
      int ans=1;
      
      for(int a=0;a<n;a++){
          scanf("%d", &arr[a]);
      }
      
      for(int q=0;q<n;q++){
          boolean[q] = 0;
      }
      
      for(int i=0;i<n;i++){
          boolean[i]++;
          if(boolean[i]>1){
              ans++;
              for(int x=0;x<=n;x++){
                  boolean[x] = 0;
              }
              boolean[i]++;
          }
          for(int p=0;p<n;p++)
            printf("%d ", boolean[p]);
          printf("\n");
      }
      
      printf("%d", ans);
  }
  return 0;
}

