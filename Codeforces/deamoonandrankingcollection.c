#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n,x;
      scanf("%d %d", &n,&x);
      int arr[n];
      int boolean[1000];

      for(int i=0;i<1000;i++){
          boolean[i] = 0;
      }

      for(int i=0;i<n;i++){
          scanf("%d", &arr[i]);
      }

      for(int i=0;i<n;i++){
          boolean[arr[i]]++;
      }
      int t=1;
      for(int i=1;i<1000;i++){
          if(boolean[i]==0 && x!=0){
              boolean[i]++;
              x--;
          }
      }

      int ans=0;
      for(int i=1;i<1000;i++){
         if(boolean[i]==0){
              ans = i-1;
              break;
          }
          //printf("%d ",boolean[i]);
      }
      //printf("\n");

      printf("%d\n", ans);
        
  }
  return 0;
}

