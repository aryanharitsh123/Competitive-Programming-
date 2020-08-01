#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n,k;
      scanf("%d %d", &n, &k);
      int a[n];
      int b[n];

      for(int q=0;q<n;q++){
          scanf("%d", &a[q]);
      }

      for(int p=0;p<n;p++){
          scanf("%d", &b[p]);
      }
      qsort(a,n,sizeof(int),cmpfunc);
      qsort(b,n,sizeof(int),cmpfunc);
      
      int ans=0;

      for(int i=n;i>(n-k);i--){
          ans = ans + a[i];
      }

      for(int j=n;j>k;j--){
          ans = ans + b[j];
      }
      printf("%d\n", ans);
  }
  return 0;
}

