#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define min(a,b) (((a)<(b))?(a):(b))

typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n,k;
      scanf("%d %d", &n, &k);
      int arr[n];
      int boolean[1000];
      int ans=0;

      for(int i=0;i<1000;i++){
        boolean[i] = 0;
      }

      
      for(int i=0;i<n;i++){
          scanf("%d", &arr[i]);
      }
      
      for(int i=0;i<n;i++){
          boolean[arr[i]]++;
          for(int x=0;x<10;x++){
              printf("%d ", boolean[x]);
          }
          printf("\n");
          if(boolean[arr[i]]>1){
            ans++;
              for(int x=0;x<n;x++){
                  boolean[x] = 0;
                  boolean[arr[i]]++;
              }
          }
      }
      
      
      printf("%d\n", ans+1);

      
  }
  return 0;
}

