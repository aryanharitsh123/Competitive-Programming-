#include<stdio.h>
#include<stdio.h>

int cmpfunc(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
 
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n;
      scanf("%d", &n);
      int arr[n];
      int sum[10000];
      int t=0;
      int frequency[10000];
      for(int x=0;x<n;x++){
          scanf("%d", &arr[x]);
      }

      for(int i=0;i<n-1;i++){
          for(int j=(n-i-1);j<n;j++){
             sum[t] = arr[i] + arr[j];
             t++;
          }
      }
      
      for(int i=0;i<t;i++){
          frequency[i] =0;
      }
      
      int ans=1;

      qsort(sum,t,sizeof(int),cmpfunc);
      int max=1;
      for(int i=1;i<t;i++){
          if(sum[i] == sum[i-1]){
              ans++;
          }
          if(ans>max)
            max = ans;
          ans = 1;
      }
      
      printf("%d\n", max);


  }
  return 0;
}

